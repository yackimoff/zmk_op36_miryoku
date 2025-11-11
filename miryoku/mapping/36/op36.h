/* Miryoku mapping for Ergohaven OP36 (3x10 + 3 thumbs per side)
 * Derived from op36.dtsi default_transform:
 *   Top 3x10:
 *     RC(0,4..0)   | RC(0,6..10)
 *     RC(1,4..0)   | RC(1,6..10)
 *     RC(2,4..0)   | RC(2,6..10)
 *   Thumbs (left → right across the gap):
 *     RC(0,5) RC(1,5) RC(2,5)  RC(2,11) RC(1,11) RC(0,11)
 */

#if !defined(MIRYOKU_LAYOUTMAPPING_OP36)

#define MIRYOKU_LAYOUTMAPPING_OP36( \
/* 10 + 10 + 10 main keys */ \
K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
/* thumbs (3 per side); Nxx are dummies kept for API compatibility */ \
N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39  \
) \
/* row 0 (left→right) */ \
K00  K01  K02  K03  K04       K05  K06  K07  K08  K09 \
/* row 1 */ \
K10  K11  K12  K13  K14       K15  K16  K17  K18  K19 \
/* row 2 */ \
K20  K21  K22  K23  K24       K25  K26  K27  K28  K29 \
/* thumbs: left (RC(0,5),RC(1,5),RC(2,5)) then right (RC(2,11),RC(1,11),RC(0,11)) */ \
          K32  K33  K34       K35  K36  K37

/* Combo anchor indices (same scheme as other 36-key boards) */
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 1 2
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 6 7
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 7 8

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 21 22
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 22 23
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 27 28

/* Inner two thumbs per side for Miryoku “thumb combos” */
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 31 32
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 33 34

#endif

/* Activate this mapping */
#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_OP36
