#ifndef BAT_H
#define BAT_H

#include <QPointF>
#include <QVector>
/*!
 * \file bat.h
 * \brief Fichier de la classe représentant les raquettes
 */

/*!
 *\class Bat
 *\brief Classe représentant les raquettes
 */
class Bat
{   
public:
    /*!
     * \brief Constructeur
     *
     *  Constructeur sans paramètres de la classe bat. Il faut éviter de l'utiliser le plus que possible,
     *  effets de bord possibles.
     *
     *  \deprecated
     */
    Bat();

    /*!
     * \brief Constructeur
     *
     * \param points Vecteur de deux points representant les extremites des raquettes.
     * \param id Id de la raquette.
     */
    Bat(const QVector<QPointF>& points, int id);

    /*!
     * \brief Constructeur
     *
     * \param point1 Point representant l'extremite gauche de la raquette.
     * \param point2 Point representant l'extremite droite de la raquette.
     * \param id Id de la raquette.
     */
    Bat(const QPointF& point1, const QPointF& point2, int id);

    /*!
     * \brief Accesseur de ID
     *
     * \return Id (entier) de la raquette.
     */
    int getId();

    /*!
     * \brief Met a jour la position de la raquette
     *
     * \param pos1 Nouvelle position de l'extremite gauche de la raquette.
     * \param pos2 Nouvelle position de l'extremite droite de la raquette.
     */
    void moveBat(QPointF& pos1, QPointF& pos2);

    /*!
     * \brief Accesseur des extremites
     *
     * \return Vecteur compose de deux points, chaque point representant une extremite de la raquette.
     */
    QVector<QPointF> getPoints();

private:

    /*!
     * \brief Vecteur de deux points representant les extremites de la raquette.
     */
    QVector<QPointF> _point;

    /*!
     * \brief Identifiant de la raquette.
     */
    int _id;
};

#endif // BAT_H
