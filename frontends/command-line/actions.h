/* actions.h
 *
 * Copyright (C) 2002 Lutz M�ller <lutz@users.sourceforge.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details. 
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __ACTIONS_H__
#define __ACTIONS_H__

typedef int image_action  (const char *folder, const char *filename);
typedef int folder_action (const char *subfolder, image_action action,
			   int reverse);

int print_folder          (const char *subfolder, image_action action,
			   int reverse);
int delete_folder_files   (const char *subfolder, image_action action,
			   int reverse);

int print_picture_action  (const char *folder, const char *filename);
int save_picture_action   (const char *folder, const char *filename);
int save_thumbnail_action (const char *folder, const char *filename);
int save_raw_action       (const char *folder, const char *filename);
int save_audio_action     (const char *folder, const char *filename);
int save_exif_action      (const char *folder, const char *filename);
int delete_picture_action (const char *folder, const char *filename);

#endif /* __ACTIONS_H__ */
