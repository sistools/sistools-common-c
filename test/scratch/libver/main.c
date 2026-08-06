/* /////////////////////////////////////////////////////////////////////////
 * File:    test/scratch/libver/main.c
 *
 * Purpose: Scratch program that prints the sistools-common-c version.
 *
 * Created: 7th August 2026
 * Updated: 7th August 2026
 *
 * ////////////////////////////////////////////////////////////////////// */


/* /////////////////////////////////////////////////////////////////////////
 * includes
 */

#include <sistools/common.h>

#include <stdio.h>
#include <stdlib.h>


/* /////////////////////////////////////////////////////////////////////////
 * helpers
 */

static
void
version_(
    FILE*       stm
,   char const* libname
,   stcc_uint32_t libver
)
{
    fprintf(
        stm
    ,   "%s v%u.%u.%u.%u\n"
    ,   libname
    ,   (unsigned)((libver >> 24) & 0xff)
    ,   (unsigned)((libver >> 16) & 0xff)
    ,   (unsigned)((libver >>  8) & 0xff)
    ,   (unsigned)((libver >>  0) & 0xff)
    );
}


/* /////////////////////////////////////////////////////////////////////////
 * main
 */

int main(int argc, char* argv[])
{
    ((void)argc);
    ((void)argv);

    version_(stdout, "\tsistools-common-c", stcc_api_version());

    return EXIT_SUCCESS;
}


/* ///////////////////////////// end of file //////////////////////////// */
