//
//  constants.h
//  Owncloud iOs Client
//
//  Created by Gonzalo Gonzalez on 10/10/12.
//

/*
 Copyright (C) 2014, ownCloud, Inc.
 This code is covered by the GNU Public License Version 3.
 For distribution utilizing Apple mechanisms please see https://owncloud.org/contribute/iOS-license-exception/
 You should have received a copy of this license
 along with this program. If not, see <http://www.gnu.org/licenses/gpl-3.0.en.html>.
 */

//URL for webdav
//#define k_url_webdav_server @"remote.php/odav/"
#define k_url_webdav_server @"remote.php/webdav/"


//Chunk length
#define k_lenght_chunk 1024//256

//Timeout to upload
#define k_timeout_upload 40 //seconds

//Timeout if a resource is not able to be retrieved within a given timeout
#define k_timeout_upload_resource 20 //Seconds

//Nº of times to try upload a chunk
#define k_times_upload_chunks 10

//1MB
//#define k_lenght_limit_until_chunking 1048576 //(256 x 1024)

//seconds to limit the relaunch of failed uploading files
#define k_minimun_time_to_relaunch 15

//seconds to limit the relaunch of waiting to upload files
#define k_percent_for_check_the_uploads 0.1

//Share link middle part url
#define k_share_link_middle_part_url_before_version_8 @"public.php?service=files&t="
#define k_share_link_middle_part_url_after_version_8 @"index.php/s/"

//Alert view tags
#define k_alertview_for_login 1
#define k_alertview_for_download_error 2

//Boolean to know when the user kill the app
#define k_app_killed_by_user @"app_killed_by_user"

//Constants to identify the different permissions of a file
#define k_permission_shared @"S"
#define k_permission_can_share @"R"
#define k_permission_mounted @"M"
#define k_permission_file_can_write @"W"
#define k_permission_can_create_file @"C"
#define k_permission_can_create_folder @"K"
#define k_permission_can_delete @"D"
#define k_permission_can_rename @"N"
#define k_permission_can_move @"V"

#define k_owncloud_folder @"cache_folder"

//WebView preview files
#define k_txt_files_font_size_iphone @"40" //examples valid formats: "30", "40", "large",...
#define k_txt_files_font_size_ipad @"20" 
#define k_txt_files_font_family @"Sans-Serif"

//Path instant upload
#define k_path_instant_upload @"InstantUpload"

//App name
#define k_app_name @"ownCloud"

