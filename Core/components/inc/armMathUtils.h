/*
 * armmathutils.h
 *
 *  Created on: 2020年8月19日
 *      Author: yuche
 */

#ifndef COMPONENTS_ARMMATHUTILS_H_
#define COMPONENTS_ARMMATHUTILS_H_

#include "arm_math.h"

void zeros(arm_matrix_instance_f32* mat);
void eye(arm_matrix_instance_f32* mat);
void matcpy(arm_matrix_instance_f32* mat1,arm_matrix_instance_f32* mat2);
void matcpy2(arm_matrix_instance_f32* mat1,arm_matrix_instance_f32* mat2,int i, int j);
void matslice(arm_matrix_instance_f32* mat1,arm_matrix_instance_f32* mat2,int i, int j);
void hat(arm_matrix_instance_f32* v_, arm_matrix_instance_f32* v_hat_);
void vee(arm_matrix_instance_f32* v_hat_, arm_matrix_instance_f32* v_);
void matexp2(arm_matrix_instance_f32* phi_, arm_matrix_instance_f32* R_);
void normalize(arm_matrix_instance_f32* v_);
void cross(arm_matrix_instance_f32* v1_, arm_matrix_instance_f32* v2_, arm_matrix_instance_f32* vres_);

#endif /* COMPONENTS_ARMMATHUTILS_H_ */
