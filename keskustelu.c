// Write a program that has a discussion with the user. First
// it asks for the users name and it must remember the name. Then
// it asks random questions (You decide what!) until the user
// types in "bye" at which point the program exits. Examples of
// questions might be favourite color, favourite food etc etc.

/* yleiset kirjastot */
#include <stdio.h>  /* lukemista ja tulostusta varten                */
#include <stdlib.h> /* random funtion käyttö                         */
#include <string.h> /* stringin vertailua varten                     */

/* omat headerit */
#include "keskustelu.h"

/* tässä tiedostossa näkyvät muuttujat */
char user_nimi[50];
char vastaus[256];
int i = 1;

/* ohjelman pääfunktio */
int main(void)
	{
    bool oikein = FALSE;

	printf( " Voit lopettaa keskustelun kirjoittamalla bye. \n" );
	printf( " Hei, mikä sinun nimi on? \n" );
	printf( "\n > " );
    scanf( "%s", user_nimi );

    while( FALSE == oikein )
        {
        kysy_jotain( );
	    printf( "\n %s > ", user_nimi );
    	scanf( "%s", vastaus );
        oikein = tarkista_bye( );
        }

    printf( "\n Näkemiin!\n" );

	return 0;
	}

bool tarkista_bye( )
    {
    int sama = 0;

    sama = strcmp( "bye", vastaus );

    if ( 0 == sama )
        {
        return TRUE;
        }
    else
        {
        return FALSE;
        }
    }

void kysy_jotain( )
    {
    if ( i > 10 )
        {
        i = 1;
        }

    switch ( i )
        {
        case 1:
            printf("\n Paljon kello on?\n");
            break;
        case 2:
            printf("\n Paistaako ulkona aurinko?\n");
            break;
        case 3:
            printf("\n Oletko käynyt jo syömässä?\n");
            break;
        case 4:
            printf("\n Olisiko aika pitää kahvitauko?\n");
            break;
        case 5:
            printf("\n Onko sinulla sukat jalassa?\n");
            break;
        case 6:
            printf("\n Mitä aiot tehdä illalla?\n");
            break;
        case 7:
            printf("\n Mikä on lempiruokasi?\n");
            break;
        case 8:
            printf("\n Missä asut?\n");
            break;
        case 9:
            printf("\n Asutko yksin?\n");
            break;
        case 10:
            printf("\n Haluatko jatkaa keskustelua?\n");
            break;
        default:
            printf("\n Jotain meni pieleen? 'bye' komennolla voit lopettaa keskustelun\n");
            break;
        }

    i++;

    }
