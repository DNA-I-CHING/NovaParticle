

[particledef]
{
id	= AmHitMetal_Sparks;
flags	=  TOPALIGN EMITVECTOR ;
move	=  NORMAL ;
lod	= 0.000;

	emit_dur	= 0.100;
	emit_dur_adj	= 0.000;
	emit_rate	= 20.000;
	emit_rate_adj	= 0.000;
	emit_delay	= 0.000;
	emit_burst	= 4;
	emit_maxoverride	= 0;
	emit_dur	= 0.100;
	y_offset	= 0.000;
	z_offset	= 0.000;
	emit_shape	= 0;
	emit_shape_size	= 0.000, 0.000, 0.000;
	emit_shape_size_skip	= 0.000, 0.000, 0.000;

	age	= 0.500;
	age_adj	= 0.000;
	alpha	= 1.000;
	color1	= 251, 207, 104;
	color2	= 250, 216, 112;
	color3	= 248, 208, 118;
	color4	= 247, 213, 111;
	bump_scale	= 0.000;
	scale	= 0.125;
	scale_adj	= 0.050;
	scale_func	= table12;
	red_func	= table8 reverse;
	green_func	= table8 reverse;
	blue_func	= table8 reverse;

	orientation	= 0.000, 0.000, 0.000;
	orientationadj	= 360.000, 360.000, 360.000;
	yaw_rot	= 0.000;
	yaw_rot_adj	= 0.000;
	pitch_rot	= 0.000;
	pitch_rot_adj	= 0.000;
	roll_rot	= 0.000;
	roll_rot_adj	= 0.000;
	speed	= 10.000;
	speed_adj	= 3.000;
	elastic	= 0.000;
	gravity	= 100.000;
	gravity_mask	= 1.000, 1.000, 1.000;
	drag	= 50.000;
	spread	= 180.000;
	spread_skip	= 140.000;
	orbitalspeed	= 0.000;
	orbitalspeed_adj	= 0.000;
	orbital_axis	= 0.000, 1.000, 0.000;
	graphic1 =	metSpark.tga, additive;
	g1_flip_frames	= 1;
	g1_flip_rate	= 8;
	g1_color1	= 251, 207, 104;
	g1_color2	= 250, 216, 112;
	g1_color3	= 248, 208, 118;
	g1_color4	= 247, 213, 111;
	g1_scale	= 0.125;
	g1_scale_adj	= 0.050;
	g1_scale_func	= table12;
	g1_red_func	= table8 reverse;
	g1_green_func	= table8 reverse;
	g1_blue_func	= table8 reverse;

}
