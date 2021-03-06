#include <cairo.h>
#include <math/Matrix3.h>
#include <hx/CFFI.h>


namespace lime {
	
	
	value lime_cairo_arc (value *arg, int argCount) {
		
		cairo_arc ((cairo_t*)(intptr_t)val_float (arg[0]), val_number (arg[1]), val_number (arg[2]), val_number (arg[3]), val_number (arg[4]), val_number (arg[5]));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_arc_negative (value *arg, int argCount) {
		
		cairo_arc_negative ((cairo_t*)(intptr_t)val_float (arg[0]), val_number (arg[1]), val_number (arg[2]), val_number (arg[3]), val_number (arg[4]), val_number (arg[5]));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_clip (value handle) {
		
		cairo_clip ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_close_path (value handle) {
		
		cairo_close_path ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_create (value surface) {
		
		return alloc_float ((intptr_t)cairo_create ((cairo_surface_t*)(intptr_t)val_float (surface)));
		
	}
	
	
	value lime_cairo_destroy (value handle) {
		
		cairo_destroy ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_fill (value handle) {
		
		cairo_fill ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_fill_preserve (value handle) {
		
		cairo_fill_preserve ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_get_line_cap (value handle) {
		
		return alloc_int (cairo_get_line_cap ((cairo_t*)(intptr_t)val_float (handle)));
		
	}
	
	
	value lime_cairo_get_line_join (value handle) {
		
		return alloc_int (cairo_get_line_join ((cairo_t*)(intptr_t)val_float (handle)));
		
	}
	
	
	value lime_cairo_get_line_width (value handle) {
		
		return alloc_float (cairo_get_line_width ((cairo_t*)(intptr_t)val_float (handle)));
		
	}
	
	
	value lime_cairo_get_matrix (value handle) {
		
		cairo_matrix_t cm;
		cairo_get_matrix ((cairo_t*)(intptr_t)val_float (handle), &cm);
		Matrix3 mat3 = Matrix3 (cm.xx, cm.yx, cm.xy, cm.yy, cm.x0, cm.y0);
		return mat3.Value ();
		
	}
	
	
	value lime_cairo_get_miter_limit (value handle) {
		
		return alloc_float (cairo_get_miter_limit ((cairo_t*)(intptr_t)val_float (handle)));
		
	}
	
	
	value lime_cairo_get_operator (value handle) {
		
		return alloc_int (cairo_get_operator ((cairo_t*)(intptr_t)val_float (handle)));
		
	}
	
	
	value lime_cairo_get_source (value handle) {
		
		return alloc_float ((intptr_t)cairo_get_source ((cairo_t*)(intptr_t)val_float (handle)));
		
	}
	
	
	value lime_cairo_get_target (value handle) {
		
		return alloc_float ((intptr_t)cairo_get_target ((cairo_t*)(intptr_t)val_float (handle)));
		
	}
	
	
	value lime_cairo_image_surface_create (value format, value width, value height) {
		
		return alloc_float ((intptr_t)cairo_image_surface_create ((cairo_format_t)val_int (format), val_int (width), val_int (height)));
		
	}
	
	
	value lime_cairo_image_surface_create_for_data (value data, value format, value width, value height, value stride) {
		
		return alloc_float ((intptr_t)cairo_image_surface_create_for_data ((unsigned char*)(intptr_t)val_float (data), (cairo_format_t)val_int (format), val_int (width), val_int (height), val_int (stride)));
		
	}
	
	
	value lime_cairo_image_surface_get_height (value handle) {
		
		return alloc_int ((intptr_t)cairo_image_surface_get_height ((cairo_surface_t*)(intptr_t)val_float (handle)));
		
	}
	
	
	value lime_cairo_image_surface_get_width (value handle) {
		
		return alloc_int ((intptr_t)cairo_image_surface_get_width ((cairo_surface_t*)(intptr_t)val_float (handle)));
		
	}
	
	
	value lime_cairo_line_to (value handle, value x, value y) {
		
		cairo_line_to ((cairo_t*)(intptr_t)val_float (handle), val_number (x), val_number (y));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_mask (value handle, value pattern) {
		
		cairo_mask ((cairo_t*)(intptr_t)val_float (handle), (cairo_pattern_t*)(intptr_t)val_float (pattern));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_move_to (value handle, value x, value y) {
		
		cairo_move_to ((cairo_t*)(intptr_t)val_float (handle), val_number (x), val_number (y));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_new_path (value handle) {
		
		cairo_new_path ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_paint (value handle) {
		
		cairo_paint ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_paint_with_alpha (value handle, value alpha) {
		
		cairo_paint_with_alpha ((cairo_t*)(intptr_t)val_float (handle), val_number (alpha));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_pattern_create_for_surface (value surface) {
		
		return alloc_float ((intptr_t)cairo_pattern_create_for_surface ((cairo_surface_t*)(intptr_t)val_float (surface)));
		
	}
	
	
	value lime_cairo_pattern_destroy (value handle) {
		
		cairo_pattern_destroy ((cairo_pattern_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_pattern_get_extend (value handle) {
		
		return alloc_int (cairo_pattern_get_extend ((cairo_pattern_t*)(intptr_t)val_float (handle)));
		
	}
	
	
	value lime_cairo_pattern_set_extend (value handle, value extend) {
		
		cairo_pattern_set_extend ((cairo_pattern_t*)(intptr_t)val_float (handle), (cairo_extend_t)val_int (extend));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_pattern_get_filter (value handle) {
		
		return alloc_int (cairo_pattern_get_filter ((cairo_pattern_t*)(intptr_t)val_float (handle)));
		
	}
	
	
	value lime_cairo_pattern_set_filter (value handle, value filter) {
		
		cairo_pattern_set_filter ((cairo_pattern_t*)(intptr_t)val_float (handle), (cairo_filter_t)val_int (filter));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_pattern_get_matrix (value handle) {
		
		cairo_matrix_t cm;
		cairo_pattern_get_matrix ((cairo_pattern_t*)(intptr_t)val_float (handle), &cm);
		Matrix3 mat3 = Matrix3 (cm.xx, cm.yx, cm.xy, cm.yy, cm.x0, cm.y0);
		return mat3.Value ();
		
	}
	
	
	value lime_cairo_pattern_set_matrix (value handle, value matrix) {
		
		Matrix3 mat3 = Matrix3 (matrix);
		
		cairo_matrix_t cm;
		cairo_matrix_init (&cm, mat3.a, mat3.b, mat3.c, mat3.d, mat3.tx, mat3.ty);
		
		cairo_pattern_set_matrix ((cairo_pattern_t*)(intptr_t)val_float (handle), &cm);
		return alloc_null ();
		
	}
	
	
	value lime_cairo_pop_group (value handle) {
		
		return alloc_float ((intptr_t)cairo_pop_group ((cairo_t*)(intptr_t)val_float (handle)));
		
	}
	
	
	value lime_cairo_pop_group_to_source (value handle) {
		
		cairo_pop_group_to_source ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_push_group (value handle) {
		
		cairo_push_group ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_push_group_with_content (value handle, value content) {
		
		cairo_push_group_with_content ((cairo_t*)(intptr_t)val_float (handle), (cairo_content_t)val_int (content));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_rectangle (value handle, value x, value y, value width, value height) {
		
		cairo_rectangle ((cairo_t*)(intptr_t)val_float (handle), val_number (x), val_number (y), val_number (width), val_number (height));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_reset_clip (value handle) {
		
		cairo_reset_clip ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_restore (value handle) {
		
		cairo_restore ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_save (value handle) {
		
		cairo_save ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_set_line_cap (value handle, value cap) {
		
		cairo_set_line_cap ((cairo_t*)(intptr_t)val_float (handle), (cairo_line_cap_t)val_int (cap));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_set_line_join (value handle, value join) {
		
		cairo_set_line_join ((cairo_t*)(intptr_t)val_float (handle), (cairo_line_join_t)val_int (join));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_set_line_width (value handle, value width) {
		
		cairo_set_line_width ((cairo_t*)(intptr_t)val_float (handle), val_number (width));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_set_matrix (value handle, value matrix) {
		
		Matrix3 mat3 = Matrix3 (matrix);
		
		cairo_matrix_t cm;
		cairo_matrix_init (&cm, mat3.a, mat3.b, mat3.c, mat3.d, mat3.tx, mat3.ty);
		
		cairo_set_matrix ((cairo_t*)(intptr_t)val_float (handle), &cm);
		return alloc_null ();
		
	}
	
	
	value lime_cairo_set_miter_limit (value handle, value miterLimit) {
		
		cairo_set_miter_limit ((cairo_t*)(intptr_t)val_float (handle), val_number (miterLimit));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_set_operator (value handle, value op) {
		
		cairo_set_operator ((cairo_t*)(intptr_t)val_float (handle), (cairo_operator_t)val_int (op));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_set_source (value handle, value pattern) {
		
		cairo_set_source ((cairo_t*)(intptr_t)val_float (handle), (cairo_pattern_t*)(intptr_t)val_float (pattern));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_set_source_rgb (value handle, value r, value g, value b) {
		
		cairo_set_source_rgb ((cairo_t*)(intptr_t)val_float (handle), val_number (r), val_number (g), val_number (b));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_set_source_rgba (value handle, value r, value g, value b, value a) {
		
		cairo_set_source_rgba ((cairo_t*)(intptr_t)val_float (handle), val_number (r), val_number (g), val_number (b), val_number (a));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_set_source_surface (value handle, value surface, value x, value y) {
		
		cairo_set_source_surface ((cairo_t*)(intptr_t)val_float (handle), (cairo_surface_t*)(intptr_t)val_float (surface), val_number (x), val_number (y));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_stroke (value handle) {
		
		cairo_stroke ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_stroke_preserve (value handle) {
		
		cairo_stroke_preserve ((cairo_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_surface_destroy (value handle) {
		
		cairo_surface_destroy ((cairo_surface_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_surface_flush (value handle) {
		
		cairo_surface_flush ((cairo_surface_t*)(intptr_t)val_float (handle));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_transform (value handle, value matrix) {
		
		Matrix3 mat3 = Matrix3 (matrix);
		
		cairo_matrix_t cm;
		cairo_matrix_init (&cm, mat3.a, mat3.b, mat3.c, mat3.d, mat3.tx, mat3.ty);
		
		cairo_transform ((cairo_t*)(intptr_t)val_float (handle), &cm);
		return alloc_null ();
		
	}
	
	
	value lime_cairo_translate (value handle, value x, value y) {
		
		cairo_translate ((cairo_t*)(intptr_t)val_float (handle), val_number (x), val_number (y));
		return alloc_null ();
		
	}
	
	
	value lime_cairo_version () {
		
		return alloc_int (cairo_version ());
		
	}
	
	
	value lime_cairo_version_string () {
		
		return alloc_string (cairo_version_string ());
		
	}
	
	
	DEFINE_PRIM_MULT (lime_cairo_arc);
	DEFINE_PRIM_MULT (lime_cairo_arc_negative);
	DEFINE_PRIM (lime_cairo_clip, 1);
	DEFINE_PRIM (lime_cairo_close_path, 1);
	DEFINE_PRIM (lime_cairo_create, 1);
	DEFINE_PRIM (lime_cairo_destroy, 1);
	DEFINE_PRIM (lime_cairo_fill, 1);
	DEFINE_PRIM (lime_cairo_fill_preserve, 1);
	DEFINE_PRIM (lime_cairo_get_line_cap, 1);
	DEFINE_PRIM (lime_cairo_get_line_join, 1);
	DEFINE_PRIM (lime_cairo_get_line_width, 1);
	DEFINE_PRIM (lime_cairo_get_matrix, 1);
	DEFINE_PRIM (lime_cairo_get_miter_limit, 1);
	DEFINE_PRIM (lime_cairo_get_operator, 1);
	DEFINE_PRIM (lime_cairo_get_source, 1);
	DEFINE_PRIM (lime_cairo_get_target, 1);
	DEFINE_PRIM (lime_cairo_image_surface_create, 3);
	DEFINE_PRIM (lime_cairo_image_surface_create_for_data, 5);
	DEFINE_PRIM (lime_cairo_image_surface_get_height, 1);
	DEFINE_PRIM (lime_cairo_image_surface_get_width, 1);
	DEFINE_PRIM (lime_cairo_line_to, 3);
	DEFINE_PRIM (lime_cairo_mask, 2);
	DEFINE_PRIM (lime_cairo_move_to, 3);
	DEFINE_PRIM (lime_cairo_new_path, 1);
	DEFINE_PRIM (lime_cairo_paint, 1);
	DEFINE_PRIM (lime_cairo_paint_with_alpha, 2);
	DEFINE_PRIM (lime_cairo_pattern_create_for_surface, 1);
	DEFINE_PRIM (lime_cairo_pattern_destroy, 1);
	DEFINE_PRIM (lime_cairo_pattern_get_extend, 1);
	DEFINE_PRIM (lime_cairo_pattern_get_filter, 1);
	DEFINE_PRIM (lime_cairo_pattern_get_matrix, 1);
	DEFINE_PRIM (lime_cairo_pattern_set_extend, 2);
	DEFINE_PRIM (lime_cairo_pattern_set_filter, 2);
	DEFINE_PRIM (lime_cairo_pattern_set_matrix, 2);
	DEFINE_PRIM (lime_cairo_pop_group, 1);
	DEFINE_PRIM (lime_cairo_pop_group_to_source, 1);
	DEFINE_PRIM (lime_cairo_push_group, 1);
	DEFINE_PRIM (lime_cairo_push_group_with_content, 2);
	DEFINE_PRIM (lime_cairo_rectangle, 5);
	DEFINE_PRIM (lime_cairo_reset_clip, 1);
	DEFINE_PRIM (lime_cairo_restore, 1);
	DEFINE_PRIM (lime_cairo_save, 1);
	DEFINE_PRIM (lime_cairo_set_line_cap, 2);
	DEFINE_PRIM (lime_cairo_set_line_join, 2);
	DEFINE_PRIM (lime_cairo_set_line_width, 2);
	DEFINE_PRIM (lime_cairo_set_matrix, 2);
	DEFINE_PRIM (lime_cairo_set_miter_limit, 2);
	DEFINE_PRIM (lime_cairo_set_operator, 2);
	DEFINE_PRIM (lime_cairo_set_source, 2);
	DEFINE_PRIM (lime_cairo_set_source_rgb, 4);
	DEFINE_PRIM (lime_cairo_set_source_rgba, 5);
	DEFINE_PRIM (lime_cairo_set_source_surface, 4);
	DEFINE_PRIM (lime_cairo_stroke, 1);
	DEFINE_PRIM (lime_cairo_stroke_preserve, 1);
	DEFINE_PRIM (lime_cairo_surface_destroy, 1);
	DEFINE_PRIM (lime_cairo_surface_flush, 1);
	DEFINE_PRIM (lime_cairo_transform, 2);
	DEFINE_PRIM (lime_cairo_translate, 3);
	DEFINE_PRIM (lime_cairo_version, 0);
	DEFINE_PRIM (lime_cairo_version_string, 0);
	
	
}


extern "C" int lime_cairo_register_prims () {
	
	return 0;
	
}