#Projet CMusic

##Client Fonctionnel 
Comporte toute la partie client graphique mais aussi le lancement d'une musique avec la touche espace

Pour les versions Windows : aller dans common.h -> modifier #define MAC en #define WINDOWS

Pour les versions Mac : aller dans common.h -> modifier #define WINDOWS en #define MAC

Pour les versions Linux : encore à vérifier

##Serveur 
Serveur en nodeJS : se lance avec la commande :

```npx node-media-server```

Lancement de la musique avec :

```ffmpeg -re -i {fichier audio} -c flv rtmp://localhost/live/STREAM_NAME```

