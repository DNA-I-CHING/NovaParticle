
[effectdef]
{
	id = Effect_FX50CalBody;
	pdefs = FX50CalBody_Mist, FX50Cal_Blood, FX50Cal_Blood2, FX50Cal_Bloodmist2, Hit_Sphere, 50Cal_Flashbody, 50Cal_HitUp;

}

[particledef]
{
id	= FX50Cal_Bloodmist2;
move	=  NORMAL ;
lod	= 0.000;

	emit_dur	= 0.100;
	emit_dur_adj	= 0.000;
	emit_rate	= 40.000;
	emit_rate_adj	= 20.000;
	emit_delay	= 0.000;
	emit_burst	= 1;
	emit_maxoverride	= 0;
	emit_dur	= 0.100;
	y_offset	= 0.000;
	z_offset	= 0.000;
	emit_shape	= 0;
	emit_shape_size	= 0.000, 0.000, 0.000;
	emit_shape_size_skip	= 0.000, 0.000, 0.000;

	age	= 0.5;
	age_adj	= 0.000;
	alpha	= 1.000;
	color1	= 145, 0, 0;
	color2	= 147, 0, 0;
	color3	= 136, 0, 0;
	color4	= 132, 0, 0;
	bump_scale	= 0.000;
	scale	= 4;
	scale_adj	= 0.000;
	scale_func	= table2 reverse;
	alpha_func	= table2;

	orientation	= 0.000, 0.000, 0.000;
	orientationadj	= 0.000, 0.000, 360.000;
	yaw_rot	= 0.000;
	yaw_rot_adj	= 0.000;
	pitch_rot	= 0.000;
	pitch_rot_adj	= 0.000;
	roll_rot	= 0.000;
	roll_rot_adj	= 0.000;
	speed	= 0.000;
	speed_adj	= 0.000;
	elastic	= 0.000;
	gravity	= 0.000;
	gravity_mask	= 1.000, 1.000, 1.000;
	drag	= 0.000;
	spread	= 0.000;
	spread_skip	= 0.000;
	orbitalspeed	= 0.000;
	orbitalspeed_adj	= 0.000;
	orbital_axis	= 0.000, 1.000, 0.000;
	graphic1 =	Splash.tga, blend;
	g1_flip_frames	= 1;
	g1_flip_rate	= 8;
	g1_color1	= 145, 0, 0;
	g1_color2	= 147, 0, 0;
	g1_color3	= 136, 0, 0;
	g1_color4	= 132, 0, 0;
	g1_scale	= 3;
	g1_scale_adj	= 0.000;
	g1_scale_func	= table2 reverse;
	g1_alpha_func	= table2;

}

[particledef]
{