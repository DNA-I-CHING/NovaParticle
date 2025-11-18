
[effectdef]
{
	id = Effect_AmHitBody;
	pdefs = BloodAltG, AmHitBody_Mist3G, AmHitBody_Mist4G, AmHitBody_Mist2G, new1, new2;

}

[effectdef]
{
	id = Effect_SGvBody;
	pdefs = BloodAltSG, SGvBody_Mist3, SGvBody_Mist2, SGvBody_Mist4, S1, S2, S3;

}


[particledef]
{
id	= new1;
flags	=  EMITVECTOR ;
move	=  NORMAL ;
lod	= 0.000;

	emit_dur	= 0.200;
	emit_dur_adj	= 0.000;
	emit_rate	= 5.000;
	emit_rate_adj	= 0.000;
	emit_delay	= 0.000;
	emit_burst	= 1;
	emit_maxoverride	= 0;
	emit_dur	= 0.200;
	y_offset	= 0.000;
	z_offset	= 0.000;
	emit_shape	= 0;
	emit_shape_size	= 0.000, 0.000, 0.000;
	emit_shape_size_skip	= 0.000, 0.000, 0.000;

	age	= 0.500;
	age_adj	= 0.000;
	alpha	= 1.000;
	color1	= 201, 0, 0;
	color2	= 172, 0, 0;
	color3	= 181, 0, 0;
	color4	= 182, 0, 0;
	bump_scale	= 0.000;
	scale	= 2.500;
	scale_adj	= 0.000;
	scale_func	= table6 reverse;
	alpha_func	= table1;

	orientation	= 0.000, 0.000, 0.000;
	orientationadj	= 360.000, 360.000, 360.000;
	yaw_rot	= 0.000;
	yaw_rot_adj	= 0.000;
	pitch_rot	= 0.000;
	pitch_rot_adj	= 0.000;
	roll_rot	= 0.000;
	roll_rot_adj	= 30.000;
	speed	= 0.500;
	speed_adj	= 0.200;
	elastic	= 0.000;
	gravity	= 0.000;
	gravity_mask	= 1.000, 1.000, 1.000;
	drag	= 100.000;
	spread	= 180.000;
	spread_skip	= 150.000;
	orbitalspeed	= 0.000;
	orbitalspeed_adj	= 0.000;
	orbital_axis	= 0.000, 1.000, 0.000;
	graphic1 =	thinpuf.tga, blend;
	g1_flip_frames	= 1;
	g1_flip_rate	= 8;
	g1_color1	= 201, 0, 0;
	g1_color2	= 172, 0, 0;
	g1_color3	= 181, 0, 0;
	g1_color4	= 182, 0, 0;
	g1_scale	= 1.500;
	g1_scale_adj	= 0.000;
	g1_scale_func	= table6 reverse;
	g1_alpha_func	= table1;
	graphic2 =	thinpuf2.tga, blend;
	g2_flip_frames	= 1;
	g2_flip_rate	= 8;
	g2_color1	= 201, 0, 0;
	g2_color2	= 172, 0, 0;
	g2_color3	= 181, 0, 0;
	g2_color4	= 182, 0, 0;
	g2_scale	= 1.500;
	g2_scale_adj	= 0.000;
	g2_scale_func	= table6 reverse;
	g2_alpha_func	= table1;
	graphic3 =	CDirtpuf.tga, blend;
	g3_flip_frames	= 1;
	g3_flip_rate	= 8;
	g3_color1	= 201, 0, 0;
	g3_color2	= 172, 0, 0;
	g3_color3	= 181, 0, 0;
	g3_color4	= 182, 0, 0;
	g3_scale	= 1.500;
	g3_scale_adj	= 0.000;
	g3_scale_func	= table6 reverse;
	g3_alpha_func	= table1;
	graphic4 =	dirtpuf.tga, blend;
	g4_flip_frames	= 1;
	g4_flip_rate	= 8;
	g4_color1	= 201, 0, 0;
	g4_color2	= 172, 0, 0;
	g4_color3	= 181, 0, 0;
	g4_color4	= 182, 0, 0;
	g4_scale	= 1.500;
	g4_scale_adj	= 0.000;
	g4_scale_func	= table6 reverse;
	g4_alpha_func	= table1;

}


[particledef]
{
id	= new2;
flags	=  EMITVECTOR ;
move	=  NORMAL ;
lod	= 0.000;

	emit_dur	= 0.200;
	emit_dur_adj	= 0.000;
	emit_rate	= 20.000;
	emit_rate_adj	= 0.000;
	emit_delay	= 0.000;
	emit_burst	= 2;
	emit_maxoverride	= 0;
	emit_dur	= 0.200;
	y_offset	= 0.000;
	z_offset	= 0.000;
	emit_shape	= 0;
	emit_shape_size	= 0.000, 0.000, 0.000;
	emit_shape_size_skip	= 0.000, 0.000, 0.000;

	age	= 0.750;
	age_adj	= 0.000;
	alpha	= 1.000;
	color1	= 125, 0, 0;
	color2	= 167, 0, 0;
	color3	= 121, 0, 0;
	color4	= 176, 0, 0;
	bump_scale	= 0.000;
	scale	= 1.250;
	scale_adj	= 0.750;
	scale_func	= table4 reverse;
	alpha_func	= table1;

	orientation	= 0.000, 0.000, 0.000;
	orientationadj	= 360.000, 360.000, 360.000;
	yaw_rot	= 0.000;
	yaw_rot_adj	= 0.000;
	pitch_rot	= 0.000;
	pitch_rot_adj	= 0.000;
	roll_rot	= 0.000;
	roll_rot_adj	= 0.000;
	speed	= 1.500;
	speed_adj	= 0.500;
	elastic	= 0.000;
	gravity	= -5.000;
	gravity_mask	= 1.000, 1.000, 1.000;
	drag	= 100.000;
	spread	= 90.000;
	spread_skip	= 0.000;
	orbitalspeed	= 0.000;
	orbitalspeed_adj	= 0.000;
	orbital_axis	= 0.000, 1.000, 0.000;
	graphic1 =	thinpuf.tga, blend;
	g1_flip_frames	= 1;
	g1_flip_rate	= 8;
	g1_color1	= 125, 0, 0;
	g1_color2	= 167, 0, 0;
	g1_color3	= 121, 0, 0;
	g1_color4	= 176, 0, 0;
	g1_scale	= 1.250;
	g1_scale_adj	= 0.750;
	g1_scale_func	= table4 reverse;
	g1_alpha_func	= table1;
	graphic2 =	thinpuf.tga, blend;
	g2_flip_frames	= 1;
	g2_flip_rate	= 8;
	g2_color1	= 125, 0, 0;
	g2_color2	= 167, 0, 0;
	g2_color3	= 121, 0, 0;
	g2_color4	= 176, 0, 0;
	g2_scale	= 1.250;
	g2_scale_adj	= 0.750;
	g2_scale_func	= table4 reverse;
	g2_alpha_func	= table1;
	graphic3 =	dirtpuf2.tga, blend;
	g3_flip_frames	= 1;
	g3_flip_rate	= 8;
	g3_color1	= 125, 0, 0;
	g3_color2	= 167, 0, 0;
	g3_color3	= 121, 0, 0;
	g3_color4	= 176, 0, 0;
	g3_scale	= 1.250;
	g3_scale_adj	= 0.750;
	g3_scale_func	= table4 reverse;
	g3_alpha_func	= table1;

}



[particledef]
{
id	= S1;
flags	=  EMITVECTOR ;
move	=  NORMAL ;
lod	= 0.000;

	emit_dur	= 0.100;
	emit_dur_adj	= 0.000;
	emit_rate	= 10.000;
	emit_rate_adj	= 0.000;
	emit_delay	= 0.000;
	emit_burst	= 1;
	emit_maxoverride	= 0;
	emit_dur	= 0.100;
	y_offset	= 0.000;
	z_offset	= 0.000;
	emit_shape	= 0;
	emit_shape_size	= 0.000, 0.000, 0.000;
	emit_shape_size_skip	= 0.000, 0.000, 0.000;

	age	= 1;
	age_adj	= 0.000;
	alpha	= 1.000;
	color1	= 121, 0, 0;
	color2	= 147, 0, 0;
	color3	= 136, 0, 0;
	color4	= 132, 0, 0;
	bump_scale	= 0.000;
	scale	= 3;
	scale_adj	= 0.000;
	scale_func	= table2 reverse;
	alpha_func	= table1;

	orientation	= 0.000, 0.000, 0.000;
	orientationadj	= 0.000, 0.000, 360.000;
	yaw_rot	= 0.000;
	yaw_rot_adj	= 0.000;
	pitch_rot	= 0.000;
	pitch_rot_adj	= 0.000;
	roll_rot	= 0.000;
	roll_rot_adj	= 0.000;
	speed	= 5.000;
	speed_adj	= 5.000;
	elastic	= 0.000;
	gravity	= 100.000;
	gravity_mask	= 1.000, 1.000, 1.000;
	drag	= 200.000;
	spread	= 0.000;
	spread_skip	= 0.000;
	orbitalspeed	= 0.000;
	orbitalspeed_adj	= 0.000;
	orbital_axis	= 0.000, 1.000, 0.000;
	graphic1 =	CMSplsh2.tga, blend;
	g1_flip_frames	= 1;
	g1_flip_rate	= 8;
	g1_color1	= 121, 0, 0;
	g1_color2	= 147, 0, 0;
	g1_color3	= 136, 0, 0;
	g1_color4	= 132, 0, 0;
	g1_scale	= 2;
	g1_scale_adj	= 0.000;
	g1_scale_func	= table2 reverse;
	g1_alpha_func	= table1;
	graphic2 =	CMSplsh2.tga, blend;
	g2_flip_frames	= 1;
	g2_flip_rate	= 8;
	g2_color1	= 121, 0, 0;
	g2_color2	= 147, 0, 0;
	g2_color3	= 136, 0, 0;
	g2_color4	= 132, 0, 0;
	g2_scale	= 3;
	g2_scale_adj	= 0.000;
	g2_scale_func	= table2 reverse;
	g2_alpha_func	= table1;
	graphic3 =	CMSplsh2.tga, blend;
	g3_flip_frames	= 1;
	g3_flip_rate	= 8;
	g3_color1	= 121, 0, 0;
	g3_color2	= 147, 0, 0;
	g3_color3	= 136, 0, 0;
	g3_color4	= 132, 0, 0;
	g3_scale	= 2;
	g3_scale_adj	= 0.000;
	g3_scale_func	= table2 reverse;
	g3_alpha_func	= table1;

}

[particledef]
{
id	= S2;
flags	=  EMITVECTOR ;
move	=  NORMAL ;
lod	= 0.000;

	emit_dur	= 0.100;
	emit_dur_adj	= 0.000;
	emit_rate	= 20.000;
	emit_rate_adj	= 0.000;
	emit_delay	= 0.000;
	emit_burst	= 1;
	emit_maxoverride	= 0;
	emit_dur	= 0.100;
	y_offset	= 0.000;
	z_offset	= 0.000;
	emit_shape	= 0;
	emit_shape_size	= 0.000, 0.000, 0.000;
	emit_shape_size_skip	= 0.000, 0.000, 0.000;

	age	= 1;
	age_adj	= 0.000;
	alpha	= 1.000;
	color1	= 132, 0, 0;
	color2	= 147, 0, 0;
	color3	= 119, 0, 0;
	color4	= 132, 0, 0;
	bump_scale	= 0.000;
	scale	= 4;
	scale_adj	= 0.000;
	scale_func	= table2 reverse;
	alpha_func	= table1;

	orientation	= 0.000, 0.000, 0.000;
	orientationadj	= 0.000, 0.000, 360.000;
	yaw_rot	= 0.000;
	yaw_rot_adj	= 0.000;
	pitch_rot	= 0.000;
	pitch_rot_adj	= 0.000;
	roll_rot	= 0.000;
	roll_rot_adj	= 0.000;
	speed	= 5.000;
	speed_adj	= 3.000;
	elastic	= 0.000;
	gravity	= 100.000;
	gravity_mask	= 1.000, 1.000, 1.000;
	drag	= 200.000;
	spread	= 0.000;
	spread_skip	= 0.000;
	orbitalspeed	= 0.000;
	orbitalspeed_adj	= 0.000;
	orbital_axis	= 0.000, 1.000, 0.000;
	graphic1 =	CMSplsh2.tga, blend;
	g1_flip_frames	= 1;
	g1_flip_rate	= 8;
	g1_color1	= 132, 0, 0;
	g1_color2	= 147, 0, 0;
	g1_color3	= 119, 0, 0;
	g1_color4	= 132, 0, 0;
	g1_scale	= 2;
	g1_scale_adj	= 0.000;
	g1_scale_func	= table2 reverse;
	g1_alpha_func	= table1;
	graphic2 =	Water3.tga, blend;
	g2_flip_frames	= 1;
	g2_flip_rate	= 8;
	g2_color1	= 132, 0, 0;
	g2_color2	= 147, 0, 0;
	g2_color3	= 119, 0, 0;
	g2_color4	= 132, 0, 0;
	g2_scale	= 3;
	g2_scale_adj	= 0.000;
	g2_scale_func	= table2 reverse;
	g2_alpha_func	= table1;
	graphic3 =	Water4.tga, blend;
	g3_flip_frames	= 1;
	g3_flip_rate	= 8;
	g3_color1	= 132, 0, 0;
	g3_color2	= 147, 0, 0;
	g3_color3	= 119, 0, 0;
	g3_color4	= 132, 0, 0;
	g3_scale	= 4;
	g3_scale_adj	= 0.000;
	g3_scale_func	= table2 reverse;
	g3_alpha_func	= table1;
	graphic4 =	CMSplsh2.tga, blend;
	g4_flip_frames	= 1;
	g4_flip_rate	= 8;
	g4_color1	= 132, 0, 0;
	g4_color2	= 147, 0, 0;
	g4_color3	= 119, 0, 0;
	g4_color4	= 132, 0, 0;
	g4_scale	= 3;
	g4_scale_adj	= 0.000;
	g4_scale_func	= table2 reverse;
	g4_alpha_func	= table1;

}

[particledef]
{
id	= S3;
flags	=  EMITVECTOR ;
move	=  NORMAL ;
lod	= 0.000;

	emit_dur	= 0.100;
	emit_dur_adj	= 0.000;
	emit_rate	= 10.000;
	emit_rate_adj	= 0.000;
	emit_delay	= 0.000;
	emit_burst	= 1;
	emit_maxoverride	= 0;
	emit_dur	= 0.100;
	y_offset	= 0.000;
	z_offset	= 0.000;
	emit_shape	= 0;
	emit_shape_size	= 0.000, 0.000, 0.000;
	emit_shape_size_skip	= 0.000, 0.000, 0.000;

	age	= 1;
	age_adj	= 0.000;
	alpha	= 1.000;
	color1	= 132, 0, 0;
	color2	= 147, 0, 0;
	color3	= 119, 0, 0;
	color4	= 132, 0, 0;
	bump_scale	= 0.000;
	scale	= 4;
	scale_adj	= 0.000;
	scale_func	= table2 reverse;
	alpha_func	= table1;

	orientation	= 0.000, 0.000, 0.000;
	orientationadj	= 0.000, 0.000, 360.000;
	yaw_rot	= 0.000;
	yaw_rot_adj	= 0.000;
	pitch_rot	= 0.000;
	pitch_rot_adj	= 0.000;
	roll_rot	= 0.000;
	roll_rot_adj	= 0.000;
	speed	= 1.000;
	speed_adj	= 0.000;
	elastic	= 0.000;
	gravity	= 100.000;
	gravity_mask	= 1.000, 1.000, 1.000;
	drag	= 200.000;
	spread	= 180.000;
	spread_skip	= 179.000;
	orbitalspeed	= 0.000;
	orbitalspeed_adj	= 0.000;
	orbital_axis	= 0.000, 1.000, 0.000;
	graphic1 =	CMSplsh2.tga, blend;
	g1_flip_frames	= 1;
	g1_flip_rate	= 8;
	g1_color1	= 132, 0, 0;
	g1_color2	= 147, 0, 0;
	g1_color3	= 119, 0, 0;
	g1_color4	= 132, 0, 0;
	g1_scale	= 4;
	g1_scale_adj	= 0.000;
	g1_scale_func	= table2 reverse;
	g1_alpha_func	= table1;
	graphic2 =	Water3.tga, blend;
	g2_flip_frames	= 1;
	g2_flip_rate	= 8;
	g2_color1	= 132, 0, 0;
	g2_color2	= 147, 0, 0;
	g2_color3	= 119, 0, 0;
	g2_color4	= 132, 0, 0;
	g2_scale	= 3;
	g2_scale_adj	= 0.000;
	g2_scale_func	= table2 reverse;
	g2_alpha_func	= table1;
	graphic3 =	Water4.tga, blend;
	g3_flip_frames	= 1;
	g3_flip_rate	= 8;
	g3_color1	= 132, 0, 0;
	g3_color2	= 147, 0, 0;
	g3_color3	= 119, 0, 0;
	g3_color4	= 132, 0, 0;
	g3_scale	= 2;
	g3_scale_adj	= 0.000;
	g3_scale_func	= table2 reverse;
	g3_alpha_func	= table1;
	graphic4 =	CMSplsh2.tga, blend;
	g4_flip_frames	= 1;
	g4_flip_rate	= 8;
	g4_color1	= 132, 0, 0;
	g4_color2	= 147, 0, 0;
	g4_color3	= 119, 0, 0;
	g4_color4	= 132, 0, 0;
	g4_scale	= 4;
	g4_scale_adj	= 0.000;
	g4_scale_func	= table2 reverse;
	g4_alpha_func	= table1;

}

