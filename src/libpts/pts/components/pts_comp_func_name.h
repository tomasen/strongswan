/*
 * Copyright (C) 2011 Sansar Choinyambuu
 * HSR Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

/**
 * @defgroup pts_comp_func_name pts_comp_func_name
 * @{ @ingroup pts
 */

#ifndef PTS_FUNC_COMP_NAME_H_
#define PTS_FUNC_COMP_NAME_H_

typedef struct pts_comp_func_name_t pts_comp_func_name_t;

#include <library.h>

#define PTS_QUALIFIER_UNKNOWN		0x00
#define PTS_QUALIFIER_WILDCARD		0x3F

/**
 * PTS Component Functional Name object
 */
struct pts_comp_func_name_t {

	/**
	 * Get the PTS Component Functional Name Vendor ID
	 *
	 * @return				PTS Component Functional Name Vendor ID
	 */
	u_int32_t (*get_vendor_id)(pts_comp_func_name_t *this);

	/**
	 * Get the PTS Component Functional Name
	 *
	 * @return				PTS Component Functional Name
	 */
	u_int32_t (*get_name)(pts_comp_func_name_t *this);

	/**
	 * Get the PTS Component Functional Name Qualifier
	 *
	 * @return				PTS Component Functional Name Qualifier
	 */
	u_int8_t (*get_qualifier)(pts_comp_func_name_t *this);

	/**
	 * Check to PTS Component Functional Names for equality
	 *
	 * @param other			Other PTS Component Functional Name
	 * @return				TRUE if equal
	 */
	bool (*equals)(pts_comp_func_name_t *this, pts_comp_func_name_t *other);

	/**
	 * Clone a PTS Component Functional Name
	 *
	 * @return				Cloned PTS Component Functional Name
	 */
	pts_comp_func_name_t* (*clone)(pts_comp_func_name_t *this);

	/**
	 * Destroys a pts_component_t object.
	 */
	void (*destroy)(pts_comp_func_name_t *this);

};

/**
 * Create a PTS Component Functional Name object
 *
 * @param vendor_id			PTS Component Functional Name Vendor ID
 * @param name				PTS Component Functional Name
 * @param					PTS Component Functional Name Qualifier
 */
pts_comp_func_name_t* pts_comp_func_name_create(u_int32_t vendor_id, 
												u_int32_t name,
												u_int8_t qualifier);

#endif /** PTS_FUNC_COMP_NAME_H_ @}*/
