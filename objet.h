#ifndef OBJET_H
#define OBJET_H

class objet
{
    public :

        /**
            Destructeur (virtuel)
        */
        virtual ~objet() ;

        /**
            M�thode pour savoir si l'objet peut �tre d�placer (virtuelle)
        */
        virtual bool PeutAllerEn(int dx, int dy) const = 0 ; // Renommer en PeutAllerDe ? �a �vitera les ambiguit�s

        /**
            M�thode pour conna�tre le type de l'objet (virtuelle)
        */
        virtual char typeObjet() const = 0 ;

        /**
            Classe permettant de donner un type aux objets
        */
        class TYPES
        {
            public :

                static constexpr char ROBOT_ANCIEN = 'A' ;
                static constexpr char ROBOT_NOUVEAU = 'N' ;
                static constexpr char ROBOT_PERSO = 'P' ;
                static constexpr char JOUEUR_BASE = 'B' ;
                static constexpr char JOUEUR_EXPERT = 'E' ;
                static constexpr char MUR = 'M' ;
                static constexpr char DEBRIS = 'D' ;
                static constexpr char VIDE = '.' ;
        };

        char d_type ;
};

#endif // OBJET_H
