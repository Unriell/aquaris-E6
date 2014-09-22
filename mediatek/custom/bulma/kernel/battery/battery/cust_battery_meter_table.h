#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#define RBAT_PULL_DOWN_R		   27000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#define RBAT_PULL_DOWN_R		  100000	
#endif
#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,67790},
        {-15,53460},
        {-10,42450},
        { -5,33930},
        {  0,27280},
        {  5,22070},
        { 10,17960},
        { 15,14700},
        { 20,12090},
        { 25,10000},
        { 30,8312},
        { 35,6942},
        { 40,5826},
        { 45,4911},
        { 50,4158},
        { 55,3536},
        { 60,3019}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0  , 4320},
	{1  , 4315},
	{3  , 4305},
	{4  , 4292},
	{5  , 4279},
	{7  , 4263},
	{8  , 4248},
	{9  , 4234},
	{11  , 4220},
	{12  , 4206},
	{13  , 4193},
	{15  , 4179},
	{16  , 4165},
	{17  , 4152},
	{19  , 4139},
	{20  , 4125},
	{21  , 4112},
	{23  , 4101},
	{24  , 4090},
	{25  , 4078},
	{27  , 4065},
	{28  , 4045},
	{29  , 4022},
	{31  , 3999},
	{32  , 3980},
	{33  , 3965},
	{35  , 3951},
	{36  , 3940},
	{37  , 3931},
	{39  , 3923},
	{40  , 3916},
	{41  , 3909},
	{43  , 3901},
	{44  , 3894},
	{45  , 3887},
	{46  , 3879},
	{48  , 3872},
	{49  , 3865},
	{50  , 3859},
	{52  , 3852},
	{53  , 3845},
	{54  , 3839},
	{56  , 3833},
	{57  , 3827},
	{58  , 3822},
	{60  , 3816},
	{61  , 3811},
	{62  , 3807},
	{64  , 3802},
	{65  , 3799},
	{66  , 3796},
	{68  , 3792},
	{69  , 3789},
	{70  , 3786},
	{72  , 3783},
	{73  , 3780},
	{74  , 3777},
	{76  , 3774},
	{77  , 3771},
	{78  , 3767},
	{80  , 3763},
	{81  , 3760},
	{82  , 3756},
	{84  , 3751},
	{85  , 3747},
	{86  , 3742},
	{88  , 3736},
	{89  , 3730},
	{90  , 3726},
	{91  , 3722},
	{92  , 3719},
	{93  , 3717},
	{94  , 3714},
	{94  , 3712},
	{95  , 3710},
	{96  , 3708},
	{96  , 3707},
	{97  , 3705},
	{97  , 3704},
	{98  , 3702},
	{98  , 3701},
	{99  , 3699},
	{99  , 3698},
	{100  , 3696},
	{100  , 3696}
};

// T1 0C
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	{0  , 4320},
	{1  , 4315},
	{2  , 4305},
	{4  , 4293},
	{5  , 4281},
	{6  , 4270},
	{7  , 4260},
	{9  , 4248},
	{10  , 4236},
	{11  , 4223},
	{12  , 4210},
	{14  , 4197},
	{15  , 4185},
	{16  , 4172},
	{17  , 4159},
	{19  , 4145},
	{20  , 4132},
	{21  , 4120},
	{22  , 4107},
	{23  , 4096},
	{25  , 4088},
	{26  , 4079},
	{27  , 4066},
	{28  , 4044},
	{30  , 4017},
	{31  , 3993},
	{32  , 3974},
	{33  , 3960},
	{35  , 3949},
	{36  , 3939},
	{37  , 3931},
	{38  , 3925},
	{39  , 3918},
	{41  , 3911},
	{42  , 3903},
	{43  , 3895},
	{44  , 3887},
	{46  , 3879},
	{47  , 3872},
	{48  , 3864},
	{49  , 3858},
	{51  , 3851},
	{52  , 3845},
	{53  , 3839},
	{54  , 3833},
	{55  , 3828},
	{57  , 3823},
	{58  , 3818},
	{59  , 3813},
	{60  , 3809},
	{62  , 3805},
	{63  , 3800},
	{64  , 3797},
	{65  , 3793},
	{67  , 3790},
	{68  , 3787},
	{69  , 3785},
	{70  , 3782},
	{71  , 3779},
	{73  , 3776},
	{74  , 3773},
	{75  , 3770},
	{76  , 3767},
	{78  , 3764},
	{79  , 3760},
	{80  , 3755},
	{81  , 3750},
	{83  , 3745},
	{84  , 3741},
	{85  , 3735},
	{86  , 3729},
	{88  , 3722},
	{89  , 3714},
	{90  , 3709},
	{91  , 3704},
	{92  , 3701},
	{94  , 3697},
	{95  , 3691},
	{96  , 3678},
	{97  , 3652},
	{98  , 3627},
	{99  , 3603},
	{99  , 3580},
	{100  , 3559},
	{100  , 3559}
};

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{0  , 4320},
	{1  , 4315},
	{2  , 4303},
	{4  , 4291},
	{5  , 4280},
	{6  , 4269},
	{7  , 4257},
	{8  , 4245},
	{10  , 4235},
	{11  , 4228},
	{12  , 4214},
	{13  , 4201},
	{14  , 4187},
	{16  , 4175},
	{17  , 4161},
	{18  , 4148},
	{19  , 4135},
	{20  , 4122},
	{22  , 4109},
	{23  , 4097},
	{24  , 4087},
	{25  , 4081},
	{26  , 4075},
	{27  , 4057},
	{29  , 4033},
	{30  , 4012},
	{31  , 3997},
	{32  , 3986},
	{33  , 3977},
	{35  , 3973},
	{36  , 3967},
	{37  , 3958},
	{38  , 3946},
	{39  , 3933},
	{41  , 3919},
	{42  , 3907},
	{43  , 3896},
	{44  , 3887},
	{45  , 3879},
	{47  , 3871},
	{48  , 3863},
	{49  , 3857},
	{50  , 3851},
	{51  , 3844},
	{53  , 3839},
	{54  , 3834},
	{55  , 3828},
	{56  , 3823},
	{57  , 3819},
	{59  , 3815},
	{60  , 3811},
	{61  , 3806},
	{62  , 3803},
	{63  , 3800},
	{65  , 3796},
	{66  , 3793},
	{67  , 3789},
	{68  , 3786},
	{69  , 3783},
	{71  , 3778},
	{72  , 3774},
	{73  , 3769},
	{74  , 3765},
	{75  , 3760},
	{77  , 3756},
	{78  , 3752},
	{79  , 3749},
	{80  , 3745},
	{81  , 3740},
	{82  , 3734},
	{84  , 3728},
	{85  , 3723},
	{86  , 3717},
	{87  , 3710},
	{88  , 3701},
	{90  , 3698},
	{91  , 3697},
	{92  , 3695},
	{93  , 3692},
	{94  , 3681},
	{96  , 3645},
	{97  , 3591},
	{98  , 3519},
	{99  , 3413},
	{100  , 3413}
};

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{0  , 4320},
	{1  , 4315},
	{2  , 4303},
	{4  , 4291},
	{5  , 4280},
	{6  , 4269},
	{7  , 4276},
	{8  , 4252},
	{10  , 4241},
	{11  , 4227},
	{12  , 4213},
	{13  , 4200},
	{15  , 4186},
	{16  , 4173},
	{17  , 4160},
	{18  , 4146},
	{19  , 4133},
	{21  , 4120},
	{22  , 4107},
	{23  , 4095},
	{24  , 4082},
	{25  , 4070},
	{27  , 4059},
	{28  , 4049},
	{29  , 4035},
	{30  , 4021},
	{31  , 4010},
	{33  , 4002},
	{34  , 3991},
	{35  , 3982},
	{36  , 3971},
	{38  , 3961},
	{39  , 3949},
	{40  , 3935},
	{41  , 3919},
	{42  , 3906},
	{44  , 3896},
	{45  , 3887},
	{46  , 3879},
	{47  , 3871},
	{48  , 3864},
	{50  , 3857},
	{51  , 3850},
	{52  , 3844},
	{53  , 3838},
	{55  , 3833},
	{56  , 3828},
	{57  , 3822},
	{58  , 3817},
	{59  , 3813},
	{61  , 3809},
	{62  , 3804},
	{63  , 3800},
	{64  , 3797},
	{65  , 3793},
	{67  , 3789},
	{68  , 3786},
	{69  , 3782},
	{70  , 3775},
	{71  , 3765},
	{73  , 3758},
	{74  , 3753},
	{75  , 3748},
	{76  , 3742},
	{78  , 3737},
	{79  , 3733},
	{80  , 3730},
	{81  , 3726},
	{82  , 3721},
	{84  , 3716},
	{85  , 3710},
	{86  , 3704},
	{87  , 3698},
	{88  , 3690},
	{90  , 3684},
	{91  , 3682},
	{92  , 3681},
	{93  , 3679},
	{94  , 3673},
	{96  , 3651},
	{97  , 3607},
	{98  , 3549},
	{99  , 3470},
	{100  , 3349},
	{100  , 3349}
};

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};

//////////////////////////////////////////////////
// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
	{618  , 4355},
	{618  , 4334},
	{758  , 4314},
	{779  , 4296},
	{788  , 4279},
	{784  , 4263},
	{779  , 4248},
	{774  , 4234},
	{768  , 4220},
	{761  , 4206},
	{754  , 4193},
	{744  , 4179},
	{735  , 4165},
	{723  , 4152},
	{712  , 4139},
	{702  , 4125},
	{698  , 4112},
	{702  , 4101},
	{705  , 4090},
	{705  , 4078},
	{705  , 4065},
	{696  , 4045},
	{684  , 4022},
	{670  , 3999},
	{661  , 3980},
	{660  , 3965},
	{653  , 3951},
	{648  , 3940},
	{649  , 3931},
	{649  , 3923},
	{651  , 3916},
	{655  , 3909},
	{653  , 3901},
	{653  , 3894},
	{655  , 3887},
	{653  , 3879},
	{655  , 3872},
	{656  , 3865},
	{656  , 3859},
	{653  , 3852},
	{644  , 3845},
	{646  , 3839},
	{649  , 3833},
	{655  , 3827},
	{660  , 3822},
	{663  , 3816},
	{667  , 3811},
	{670  , 3807},
	{674  , 3802},
	{679  , 3799},
	{686  , 3796},
	{693  , 3792},
	{695  , 3789},
	{689  , 3786},
	{695  , 3783},
	{705  , 3780},
	{719  , 3777},
	{733  , 3774},
	{747  , 3771},
	{761  , 3767},
	{774  , 3763},
	{789  , 3760},
	{805  , 3756},
	{819  , 3751},
	{836  , 3747},
	{856  , 3742},
	{875  , 3736},
	{894  , 3730},
	{921  , 3726},
	{914  , 3722},
	{908  , 3719},
	{905  , 3717},
	{901  , 3714},
	{898  , 3712},
	{894  , 3710},
	{891  , 3708},
	{889  , 3707},
	{886  , 3705},
	{882  , 3704},
	{879  , 3702},
	{879  , 3701},
	{875  , 3699},
	{873  , 3698},
	{870  , 3696},
	{870  , 3696}
};

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
	{420  , 4360},
	{420  , 4340},
	{418  , 4323},
	{420  , 4307},
	{418  , 4292},
	{417  , 4278},
	{417  , 4264},
	{422  , 4250},
	{418  , 4236},
	{417  , 4223},
	{413  , 4210},
	{410  , 4197},
	{408  , 4185},
	{404  , 4172},
	{401  , 4159},
	{397  , 4145},
	{395  , 4132},
	{395  , 4120},
	{394  , 4107},
	{394  , 4096},
	{401  , 4088},
	{404  , 4079},
	{403  , 4066},
	{390  , 4044},
	{376  , 4017},
	{366  , 3993},
	{361  , 3974},
	{355  , 3960},
	{357  , 3949},
	{353  , 3939},
	{355  , 3931},
	{359  , 3925},
	{359  , 3918},
	{357  , 3911},
	{355  , 3903},
	{353  , 3895},
	{353  , 3887},
	{353  , 3879},
	{355  , 3872},
	{352  , 3864},
	{353  , 3858},
	{353  , 3851},
	{355  , 3845},
	{357  , 3839},
	{359  , 3833},
	{362  , 3828},
	{366  , 3823},
	{368  , 3818},
	{369  , 3813},
	{373  , 3809},
	{374  , 3805},
	{374  , 3800},
	{378  , 3797},
	{374  , 3793},
	{378  , 3790},
	{382  , 3787},
	{388  , 3785},
	{392  , 3782},
	{397  , 3779},
	{403  , 3776},
	{408  , 3773},
	{413  , 3770},
	{420  , 3767},
	{429  , 3764},
	{436  , 3760},
	{443  , 3755},
	{448  , 3750},
	{458  , 3745},
	{474  , 3741},
	{487  , 3735},
	{502  , 3729},
	{516  , 3722},
	{530  , 3714},
	{551  , 3709},
	{576  , 3704},
	{607  , 3701},
	{646  , 3697},
	{691  , 3691},
	{747  , 3678},
	{791  , 3652},
	{749  , 3627},
	{709  , 3603},
	{669  , 3580},
	{632  , 3559},
	{630  , 3559}
};

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
	{135  , 4359},
	{135  , 4342},
	{135  , 4327},
	{138  , 4313},
	{136  , 4297},
	{136  , 4284},
	{138  , 4270},
	{136  , 4255},
	{138  , 4242},
	{138  , 4228},
	{138  , 4214},
	{140  , 4201},
	{140  , 4187},
	{142  , 4175},
	{142  , 4161},
	{144  , 4148},
	{144  , 4135},
	{145  , 4122},
	{145  , 4109},
	{147  , 4097},
	{151  , 4087},
	{156  , 4081},
	{161  , 4075},
	{154  , 4057},
	{151  , 4033},
	{152  , 4012},
	{152  , 3997},
	{154  , 3986},
	{156  , 3977},
	{161  , 3973},
	{161  , 3967},
	{159  , 3958},
	{156  , 3946},
	{152  , 3933},
	{145  , 3919},
	{144  , 3907},
	{140  , 3896},
	{140  , 3887},
	{142  , 3879},
	{140  , 3871},
	{138  , 3863},
	{140  , 3857},
	{140  , 3851},
	{138  , 3844},
	{140  , 3839},
	{142  , 3834},
	{140  , 3828},
	{140  , 3823},
	{142  , 3819},
	{142  , 3815},
	{144  , 3811},
	{142  , 3806},
	{144  , 3803},
	{145  , 3800},
	{147  , 3796},
	{149  , 3793},
	{149  , 3789},
	{149  , 3786},
	{151  , 3783},
	{147  , 3778},
	{145  , 3774},
	{144  , 3769},
	{144  , 3765},
	{144  , 3760},
	{144  , 3756},
	{144  , 3752},
	{145  , 3749},
	{145  , 3745},
	{145  , 3740},
	{145  , 3734},
	{145  , 3728},
	{147  , 3723},
	{149  , 3717},
	{151  , 3710},
	{149  , 3701},
	{149  , 3698},
	{152  , 3697},
	{154  , 3695},
	{157  , 3692},
	{159  , 3681},
	{156  , 3645},
	{161  , 3591},
	{168  , 3519},
	{179  , 3413},
	{374  , 3413}
};

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
	{123  , 4354},
	{123  , 4340},
	{121  , 4325},
	{121  , 4311},
	{123  , 4297},
	{123  , 4283},
	{121  , 4269},
	{121  , 4255},
	{123  , 4241},
	{123  , 4227},
	{123  , 4213},
	{123  , 4200},
	{123  , 4186},
	{123  , 4173},
	{124  , 4160},
	{123  , 4146},
	{123  , 4133},
	{123  , 4120},
	{123  , 4107},
	{124  , 4095},
	{124  , 4082},
	{124  , 4070},
	{126  , 4059},
	{130  , 4049},
	{126  , 4035},
	{128  , 4021},
	{128  , 4010},
	{130  , 4002},
	{130  , 3991},
	{131  , 3982},
	{131  , 3971},
	{131  , 3961},
	{131  , 3949},
	{130  , 3935},
	{124  , 3919},
	{123  , 3906},
	{123  , 3896},
	{123  , 3887},
	{123  , 3879},
	{123  , 3871},
	{123  , 3864},
	{123  , 3857},
	{123  , 3850},
	{123  , 3844},
	{121  , 3838},
	{123  , 3833},
	{123  , 3828},
	{123  , 3822},
	{123  , 3817},
	{123  , 3813},
	{124  , 3809},
	{123  , 3804},
	{123  , 3800},
	{124  , 3797},
	{126  , 3793},
	{124  , 3789},
	{126  , 3786},
	{128  , 3782},
	{124  , 3775},
	{121  , 3765},
	{121  , 3758},
	{123  , 3753},
	{123  , 3748},
	{121  , 3742},
	{121  , 3737},
	{123  , 3733},
	{123  , 3730},
	{123  , 3726},
	{121  , 3721},
	{124  , 3716},
	{123  , 3710},
	{123  , 3704},
	{124  , 3698},
	{123  , 3690},
	{123  , 3684},
	{123  , 3682},
	{124  , 3681},
	{126  , 3679},
	{128  , 3673},
	{126  , 3651},
	{126  , 3607},
	{131  , 3549},
	{136  , 3470},
	{151  , 3349},
	{263  , 3349}
};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 }
};
// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

