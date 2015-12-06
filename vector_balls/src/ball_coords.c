#include "genesis.h"

/* cube.obj */
/* List of vertices */
const Vect3D_f16 vb_cube_vertex_pos[8] =
{
	{FIX16(-5.773502691896258),	FIX16(5.773502691896258),	FIX16(5.773502691896258)},
	{FIX16(5.773502691896258),	FIX16(5.773502691896258),	FIX16(5.773502691896258)},
	{FIX16(5.773502691896258),	FIX16(-5.773502691896258),	FIX16(5.773502691896258)},
	{FIX16(-5.773502691896258),	FIX16(-5.773502691896258),	FIX16(5.773502691896258)},
	{FIX16(-5.773502691896258),	FIX16(5.773502691896258),	FIX16(-5.773502691896258)},
	{FIX16(5.773502691896258),	FIX16(5.773502691896258),	FIX16(-5.773502691896258)},
	{FIX16(5.773502691896258),	FIX16(-5.773502691896258),	FIX16(-5.773502691896258)},
	{FIX16(-5.773502691896258),	FIX16(-5.773502691896258),	FIX16(-5.773502691896258)},
};
/* grid_cube.obj */
/* List of vertices */
const Vect3D_f16 vb_grid_cube_vertex_pos[100] =
{
	{FIX16(-2.875702648687182),	FIX16(5.817445677500408),	FIX16(-5.751405297374364)},
	{FIX16(-5.751405297374364),	FIX16(5.817445677500408),	FIX16(-5.751405297374364)},
	{FIX16(-5.751405297374364),	FIX16(5.817445677500408),	FIX16(-2.875702648687182)},
	{FIX16(-2.875702648687182),	FIX16(5.817445677500408),	FIX16(-2.875702648687182)},
	{FIX16(-5.751405297374364),	FIX16(5.817445677500408),	FIX16(-0.0)},
	{FIX16(-2.875702648687182),	FIX16(5.817445677500408),	FIX16(-0.0)},
	{FIX16(0.0),	FIX16(5.817445677500408),	FIX16(-0.0)},
	{FIX16(0.0),	FIX16(5.817445677500408),	FIX16(-2.875702648687182)},
	{FIX16(0.0),	FIX16(5.817445677500408),	FIX16(-5.751405297374364)},
	{FIX16(-5.751405297374364),	FIX16(5.817445677500408),	FIX16(2.875702648687182)},
	{FIX16(-5.751405297374364),	FIX16(5.817445677500408),	FIX16(5.751405297374364)},
	{FIX16(-2.875702648687182),	FIX16(5.817445677500408),	FIX16(5.751405297374364)},
	{FIX16(-2.875702648687182),	FIX16(5.817445677500408),	FIX16(2.875702648687182)},
	{FIX16(0.0),	FIX16(5.817445677500408),	FIX16(5.751405297374364)},
	{FIX16(0.0),	FIX16(5.817445677500408),	FIX16(2.875702648687182)},
	{FIX16(2.875702648687182),	FIX16(5.817445677500408),	FIX16(5.751405297374364)},
	{FIX16(5.751405297374364),	FIX16(5.817445677500408),	FIX16(5.751405297374364)},
	{FIX16(5.751405297374364),	FIX16(5.817445677500408),	FIX16(2.875702648687182)},
	{FIX16(2.875702648687182),	FIX16(5.817445677500408),	FIX16(2.875702648687182)},
	{FIX16(5.751405297374364),	FIX16(5.817445677500408),	FIX16(-0.0)},
	{FIX16(2.875702648687182),	FIX16(5.817445677500408),	FIX16(-0.0)},
	{FIX16(5.751405297374364),	FIX16(5.817445677500408),	FIX16(-2.875702648687182)},
	{FIX16(5.751405297374364),	FIX16(5.817445677500408),	FIX16(-5.751405297374364)},
	{FIX16(2.875702648687182),	FIX16(5.817445677500408),	FIX16(-5.751405297374364)},
	{FIX16(2.875702648687182),	FIX16(5.817445677500408),	FIX16(-2.875702648687182)},
	{FIX16(5.751405297374364),	FIX16(-5.817445677500408),	FIX16(2.875702648687182)},
	{FIX16(5.751405297374364),	FIX16(-5.817445677500408),	FIX16(5.751405297374364)},
	{FIX16(2.875702648687182),	FIX16(-5.817445677500408),	FIX16(5.751405297374364)},
	{FIX16(2.875702648687182),	FIX16(-5.817445677500408),	FIX16(2.875702648687182)},
	{FIX16(0.0),	FIX16(-5.817445677500408),	FIX16(5.751405297374364)},
	{FIX16(0.0),	FIX16(-5.817445677500408),	FIX16(2.875702648687182)},
	{FIX16(0.0),	FIX16(-5.817445677500408),	FIX16(-0.0)},
	{FIX16(2.875702648687182),	FIX16(-5.817445677500408),	FIX16(-0.0)},
	{FIX16(5.751405297374364),	FIX16(-5.817445677500408),	FIX16(-0.0)},
	{FIX16(-2.875702648687182),	FIX16(-5.817445677500408),	FIX16(5.751405297374364)},
	{FIX16(-5.751405297374364),	FIX16(-5.817445677500408),	FIX16(5.751405297374364)},
	{FIX16(-5.751405297374364),	FIX16(-5.817445677500408),	FIX16(2.875702648687182)},
	{FIX16(-2.875702648687182),	FIX16(-5.817445677500408),	FIX16(2.875702648687182)},
	{FIX16(-5.751405297374364),	FIX16(-5.817445677500408),	FIX16(-0.0)},
	{FIX16(-2.875702648687182),	FIX16(-5.817445677500408),	FIX16(-0.0)},
	{FIX16(-5.751405297374364),	FIX16(-5.817445677500408),	FIX16(-2.875702648687182)},
	{FIX16(-5.751405297374364),	FIX16(-5.817445677500408),	FIX16(-5.751405297374364)},
	{FIX16(-2.875702648687182),	FIX16(-5.817445677500408),	FIX16(-5.751405297374364)},
	{FIX16(-2.875702648687182),	FIX16(-5.817445677500408),	FIX16(-2.875702648687182)},
	{FIX16(0.0),	FIX16(-5.817445677500408),	FIX16(-5.751405297374364)},
	{FIX16(0.0),	FIX16(-5.817445677500408),	FIX16(-2.875702648687182)},
	{FIX16(2.875702648687182),	FIX16(-5.817445677500408),	FIX16(-5.751405297374364)},
	{FIX16(5.751405297374364),	FIX16(-5.817445677500408),	FIX16(-5.751405297374364)},
	{FIX16(5.751405297374364),	FIX16(-5.817445677500408),	FIX16(-2.875702648687182)},
	{FIX16(2.875702648687182),	FIX16(-5.817445677500408),	FIX16(-2.875702648687182)},
	{FIX16(-2.875702648687182),	FIX16(1.9531813343397417),	FIX16(-5.751405297374364)},
	{FIX16(-5.751405297374364),	FIX16(1.9531813343397417),	FIX16(-5.751405297374364)},
	{FIX16(-5.751405297374364),	FIX16(1.9531813343397417),	FIX16(-2.875702648687182)},
	{FIX16(-2.875702648687182),	FIX16(1.9531813343397417),	FIX16(-2.875702648687182)},
	{FIX16(-5.751405297374364),	FIX16(1.9531813343397417),	FIX16(-0.0)},
	{FIX16(-2.875702648687182),	FIX16(1.9531813343397417),	FIX16(-0.0)},
	{FIX16(0.0),	FIX16(1.9531813343397417),	FIX16(-0.0)},
	{FIX16(0.0),	FIX16(1.9531813343397417),	FIX16(-2.875702648687182)},
	{FIX16(0.0),	FIX16(1.9531813343397417),	FIX16(-5.751405297374364)},
	{FIX16(-5.751405297374364),	FIX16(1.9531813343397417),	FIX16(2.875702648687182)},
	{FIX16(-5.751405297374364),	FIX16(1.9531813343397417),	FIX16(5.751405297374364)},
	{FIX16(-2.875702648687182),	FIX16(1.9531813343397417),	FIX16(5.751405297374364)},
	{FIX16(-2.875702648687182),	FIX16(1.9531813343397417),	FIX16(2.875702648687182)},
	{FIX16(0.0),	FIX16(1.9531813343397417),	FIX16(5.751405297374364)},
	{FIX16(0.0),	FIX16(1.9531813343397417),	FIX16(2.875702648687182)},
	{FIX16(2.875702648687182),	FIX16(1.9531813343397417),	FIX16(5.751405297374364)},
	{FIX16(5.751405297374364),	FIX16(1.9531813343397417),	FIX16(5.751405297374364)},
	{FIX16(5.751405297374364),	FIX16(1.9531813343397417),	FIX16(2.875702648687182)},
	{FIX16(2.875702648687182),	FIX16(1.9531813343397417),	FIX16(2.875702648687182)},
	{FIX16(5.751405297374364),	FIX16(1.9531813343397417),	FIX16(-0.0)},
	{FIX16(2.875702648687182),	FIX16(1.9531813343397417),	FIX16(-0.0)},
	{FIX16(5.751405297374364),	FIX16(1.9531813343397417),	FIX16(-2.875702648687182)},
	{FIX16(5.751405297374364),	FIX16(1.9531813343397417),	FIX16(-5.751405297374364)},
	{FIX16(2.875702648687182),	FIX16(1.9531813343397417),	FIX16(-5.751405297374364)},
	{FIX16(2.875702648687182),	FIX16(1.9531813343397417),	FIX16(-2.875702648687182)},
	{FIX16(5.751405297374364),	FIX16(-1.9531813343397417),	FIX16(2.875702648687182)},
	{FIX16(5.751405297374364),	FIX16(-1.9531813343397417),	FIX16(5.751405297374364)},
	{FIX16(2.875702648687182),	FIX16(-1.9531813343397417),	FIX16(5.751405297374364)},
	{FIX16(2.875702648687182),	FIX16(-1.9531813343397417),	FIX16(2.875702648687182)},
	{FIX16(0.0),	FIX16(-1.9531813343397417),	FIX16(5.751405297374364)},
	{FIX16(0.0),	FIX16(-1.9531813343397417),	FIX16(2.875702648687182)},
	{FIX16(0.0),	FIX16(-1.9531813343397417),	FIX16(-0.0)},
	{FIX16(2.875702648687182),	FIX16(-1.9531813343397417),	FIX16(-0.0)},
	{FIX16(5.751405297374364),	FIX16(-1.9531813343397417),	FIX16(-0.0)},
	{FIX16(-2.875702648687182),	FIX16(-1.9531813343397417),	FIX16(5.751405297374364)},
	{FIX16(-5.751405297374364),	FIX16(-1.9531813343397417),	FIX16(5.751405297374364)},
	{FIX16(-5.751405297374364),	FIX16(-1.9531813343397417),	FIX16(2.875702648687182)},
	{FIX16(-2.875702648687182),	FIX16(-1.9531813343397417),	FIX16(2.875702648687182)},
	{FIX16(-5.751405297374364),	FIX16(-1.9531813343397417),	FIX16(-0.0)},
	{FIX16(-2.875702648687182),	FIX16(-1.9531813343397417),	FIX16(-0.0)},
	{FIX16(-5.751405297374364),	FIX16(-1.9531813343397417),	FIX16(-2.875702648687182)},
	{FIX16(-5.751405297374364),	FIX16(-1.9531813343397417),	FIX16(-5.751405297374364)},
	{FIX16(-2.875702648687182),	FIX16(-1.9531813343397417),	FIX16(-5.751405297374364)},
	{FIX16(-2.875702648687182),	FIX16(-1.9531813343397417),	FIX16(-2.875702648687182)},
	{FIX16(0.0),	FIX16(-1.9531813343397417),	FIX16(-5.751405297374364)},
	{FIX16(0.0),	FIX16(-1.9531813343397417),	FIX16(-2.875702648687182)},
	{FIX16(2.875702648687182),	FIX16(-1.9531813343397417),	FIX16(-5.751405297374364)},
	{FIX16(5.751405297374364),	FIX16(-1.9531813343397417),	FIX16(-5.751405297374364)},
	{FIX16(5.751405297374364),	FIX16(-1.9531813343397417),	FIX16(-2.875702648687182)},
	{FIX16(2.875702648687182),	FIX16(-1.9531813343397417),	FIX16(-2.875702648687182)},
};
/* grid_sphere.obj */
/* List of vertices */
const Vect3D_f16 vb_grid_sphere_vertex_pos[84] =
{
	{FIX16(-3.691796911181285),	FIX16(6.35460559496488),	FIX16(-6.7815644339022425)},
	{FIX16(-6.7815644339022425),	FIX16(6.35460559496488),	FIX16(-3.691796911181285)},
	{FIX16(-4.056030170692791),	FIX16(7.4395805263427945),	FIX16(-4.056030170692791)},
	{FIX16(-7.266901995777954),	FIX16(6.6451290566937296),	FIX16(-0.0)},
	{FIX16(-4.271620343587802),	FIX16(8.062264283430036),	FIX16(-0.0)},
	{FIX16(0.0),	FIX16(8.87605381021186),	FIX16(-0.0)},
	{FIX16(0.0),	FIX16(8.062264283430036),	FIX16(-4.271620343587802)},
	{FIX16(0.0),	FIX16(6.6451290566937296),	FIX16(-7.266901995777954)},
	{FIX16(-6.7815644339022425),	FIX16(6.35460559496488),	FIX16(3.691796911181285)},
	{FIX16(-3.691796911181285),	FIX16(6.35460559496488),	FIX16(6.7815644339022425)},
	{FIX16(-4.056030170692791),	FIX16(7.4395805263427945),	FIX16(4.056030170692791)},
	{FIX16(0.0),	FIX16(6.6451290566937296),	FIX16(7.266901995777954)},
	{FIX16(0.0),	FIX16(8.062264283430036),	FIX16(4.271620343587802)},
	{FIX16(3.691796911181285),	FIX16(6.35460559496488),	FIX16(6.7815644339022425)},
	{FIX16(6.7815644339022425),	FIX16(6.35460559496488),	FIX16(3.691796911181285)},
	{FIX16(4.056030170692791),	FIX16(7.4395805263427945),	FIX16(4.056030170692791)},
	{FIX16(7.266901995777954),	FIX16(6.6451290566937296),	FIX16(-0.0)},
	{FIX16(4.271620343587802),	FIX16(8.062264283430036),	FIX16(-0.0)},
	{FIX16(6.7815644339022425),	FIX16(6.35460559496488),	FIX16(-3.691796911181285)},
	{FIX16(3.691796911181285),	FIX16(6.35460559496488),	FIX16(-6.7815644339022425)},
	{FIX16(4.056030170692791),	FIX16(7.4395805263427945),	FIX16(-4.056030170692791)},
	{FIX16(6.7815644339022425),	FIX16(-6.354606155807337),	FIX16(3.691796911181285)},
	{FIX16(3.691796911181285),	FIX16(-6.354606155807337),	FIX16(6.7815644339022425)},
	{FIX16(4.056030170692791),	FIX16(-7.439581087194662),	FIX16(4.056030170692791)},
	{FIX16(0.0),	FIX16(-6.645129617536187),	FIX16(7.266901995777954)},
	{FIX16(0.0),	FIX16(-8.062264844281902),	FIX16(4.271620343587802)},
	{FIX16(0.0),	FIX16(-8.87605381021186),	FIX16(-0.0)},
	{FIX16(4.271620343587802),	FIX16(-8.062264844281902),	FIX16(-0.0)},
	{FIX16(7.266901995777954),	FIX16(-6.645129617536187),	FIX16(-0.0)},
	{FIX16(-3.691796911181285),	FIX16(-6.354606155807337),	FIX16(6.7815644339022425)},
	{FIX16(-6.7815644339022425),	FIX16(-6.354606155807337),	FIX16(3.691796911181285)},
	{FIX16(-4.056030170692791),	FIX16(-7.439581087194662),	FIX16(4.056030170692791)},
	{FIX16(-7.266901995777954),	FIX16(-6.645129617536187),	FIX16(-0.0)},
	{FIX16(-4.271620343587802),	FIX16(-8.062264844281902),	FIX16(-0.0)},
	{FIX16(-6.7815644339022425),	FIX16(-6.354606155807337),	FIX16(-3.691796911181285)},
	{FIX16(-3.691796911181285),	FIX16(-6.354606155807337),	FIX16(-6.7815644339022425)},
	{FIX16(-4.056030170692791),	FIX16(-7.439581087194662),	FIX16(-4.056030170692791)},
	{FIX16(0.0),	FIX16(-6.645129617536187),	FIX16(-7.266901995777954)},
	{FIX16(0.0),	FIX16(-8.062264844281902),	FIX16(-4.271620343587802)},
	{FIX16(3.691796911181285),	FIX16(-6.354606155807337),	FIX16(-6.7815644339022425)},
	{FIX16(6.7815644339022425),	FIX16(-6.354606155807337),	FIX16(-3.691796911181285)},
	{FIX16(4.056030170692791),	FIX16(-7.439581087194662),	FIX16(-4.056030170692791)},
	{FIX16(-4.208395889394788),	FIX16(2.053379319660607),	FIX16(-7.711313879948023)},
	{FIX16(-7.711313879948023),	FIX16(2.053379319660607),	FIX16(-4.208395889394788)},
	{FIX16(-5.042220047178817),	FIX16(3.327387545237349),	FIX16(-5.042220047178817)},
	{FIX16(-8.439006988856852),	FIX16(2.3714930235112193),	FIX16(-0.0)},
	{FIX16(-5.7032787428761145),	FIX16(4.366281479277943),	FIX16(-0.0)},
	{FIX16(0.0),	FIX16(6.386418044982964),	FIX16(-0.0)},
	{FIX16(0.0),	FIX16(4.366281479277943),	FIX16(-5.7032787428761145)},
	{FIX16(0.0),	FIX16(2.3714930235112193),	FIX16(-8.439006988856852)},
	{FIX16(-7.711313879948023),	FIX16(2.053379319660607),	FIX16(4.208395889394788)},
	{FIX16(-4.208395889394788),	FIX16(2.053379319660607),	FIX16(7.711313879948023)},
	{FIX16(-5.042220047178817),	FIX16(3.327387545237349),	FIX16(5.042220047178817)},
	{FIX16(0.0),	FIX16(2.3714930235112193),	FIX16(8.439006988856852)},
	{FIX16(0.0),	FIX16(4.366281479277943),	FIX16(5.7032787428761145)},
	{FIX16(4.208395889394788),	FIX16(2.053379319660607),	FIX16(7.711313879948023)},
	{FIX16(7.711313879948023),	FIX16(2.053379319660607),	FIX16(4.208395889394788)},
	{FIX16(5.042220047178817),	FIX16(3.327387545237349),	FIX16(5.042220047178817)},
	{FIX16(8.439006988856852),	FIX16(2.3714930235112193),	FIX16(-0.0)},
	{FIX16(5.7032787428761145),	FIX16(4.366281479277943),	FIX16(-0.0)},
	{FIX16(7.711313879948023),	FIX16(2.053379319660607),	FIX16(-4.208395889394788)},
	{FIX16(4.208395889394788),	FIX16(2.053379319660607),	FIX16(-7.711313879948023)},
	{FIX16(5.042220047178817),	FIX16(3.327387545237349),	FIX16(-5.042220047178817)},
	{FIX16(7.711313879948023),	FIX16(-2.053379459880631),	FIX16(4.208395889394788)},
	{FIX16(4.208395889394788),	FIX16(-2.053379459880631),	FIX16(7.711313879948023)},
	{FIX16(5.042220047178817),	FIX16(-3.327387545237349),	FIX16(5.042220047178817)},
	{FIX16(0.0),	FIX16(-2.3714924626593517),	FIX16(8.439006988856852)},
	{FIX16(0.0),	FIX16(-4.366281198856715),	FIX16(5.7032787428761145)},
	{FIX16(0.0),	FIX16(-6.386418044982964),	FIX16(-0.0)},
	{FIX16(5.7032787428761145),	FIX16(-4.366281198856715),	FIX16(-0.0)},
	{FIX16(8.439006988856852),	FIX16(-2.3714924626593517),	FIX16(-0.0)},
	{FIX16(-4.208395889394788),	FIX16(-2.053379459880631),	FIX16(7.711313879948023)},
	{FIX16(-7.711313879948023),	FIX16(-2.053379459880631),	FIX16(4.208395889394788)},
	{FIX16(-5.042220047178817),	FIX16(-3.327387545237349),	FIX16(5.042220047178817)},
	{FIX16(-8.439006988856852),	FIX16(-2.3714924626593517),	FIX16(-0.0)},
	{FIX16(-5.7032787428761145),	FIX16(-4.366281198856715),	FIX16(-0.0)},
	{FIX16(-7.711313879948023),	FIX16(-2.053379459880631),	FIX16(-4.208395889394788)},
	{FIX16(-4.208395889394788),	FIX16(-2.053379459880631),	FIX16(-7.711313879948023)},
	{FIX16(-5.042220047178817),	FIX16(-3.327387545237349),	FIX16(-5.042220047178817)},
	{FIX16(0.0),	FIX16(-2.3714924626593517),	FIX16(-8.439006988856852)},
	{FIX16(0.0),	FIX16(-4.366281198856715),	FIX16(-5.7032787428761145)},
	{FIX16(4.208395889394788),	FIX16(-2.053379459880631),	FIX16(-7.711313879948023)},
	{FIX16(7.711313879948023),	FIX16(-2.053379459880631),	FIX16(-4.208395889394788)},
	{FIX16(5.042220047178817),	FIX16(-3.327387545237349),	FIX16(-5.042220047178817)},
};