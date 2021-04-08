/**
 * D�termine si un objet est verrouill� ou non pour un joueur donn�
 *
 * @param 0 l'objet pour lequel savoir s'il est verrouill�
 * @param 1 l'unit� pour laquelle savoir si l'objet est verrouill�
 *
 * @return true si l'objet est verrouill�, false sinon
 *
 * Copyright (C) 2014 Team ~R3F~
 *
 * This program is free software under the terms of the GNU General Public License version 3.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

private ["_objet", "_unite", "_objet_verrouille"];

_objet = _this select 0;
_unite = _this select 1;

false
