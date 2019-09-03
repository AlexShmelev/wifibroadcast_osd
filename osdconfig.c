/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "osdconfig.h"
#include "graphengine.h"

osd_params_t osd_params = {
    .Arm_en=1,
    .Arm_panel=1,
    .Arm_posX=GRAPHICS_RIGHT - 10,
    .Arm_posY=40,
    .Arm_fontsize=0,
    .Arm_align=2,
    .BattVolt_en=1,
    .BattVolt_panel=1,
    .BattVolt_posX=10,
    .BattVolt_posY=GRAPHICS_BOTTOM - 38,
    .BattVolt_fontsize=0,
    .BattVolt_align=0,
    .BattCurrent_en=1,
    .BattCurrent_panel=1,
    .BattCurrent_posX=2,
    .BattCurrent_posY=GRAPHICS_BOTTOM - 28,
    .BattCurrent_fontsize=0,
    .BattCurrent_align=0,
    .BattRemaining_en=1,
    .BattRemaining_panel=1,
    .BattRemaining_posX=18,
    .BattRemaining_posY=GRAPHICS_BOTTOM - 48,
    .BattRemaining_fontsize=0,
    .BattRemaining_align=0,
    .FlightMode_en=1,
    .FlightMode_panel=1,
    .FlightMode_posX=GRAPHICS_X_MIDDLE,
    .FlightMode_posY=64,
    .FlightMode_fontsize=1,
    .FlightMode_align=1,
    .GpsStatus_en=1,
    .GpsStatus_panel=1,
    .GpsStatus_posX=GRAPHICS_RIGHT - 160,
    .GpsStatus_posY=GRAPHICS_BOTTOM - 38,
    .GpsStatus_fontsize=0,
    .GpsStatus_align=0,
    .GpsHDOP_en=1,
    .GpsHDOP_panel=1,
    .GpsHDOP_posX=GRAPHICS_RIGHT - 160,
    .GpsHDOP_posY=GRAPHICS_BOTTOM - 28,
    .GpsHDOP_fontsize=0,
    .GpsHDOP_align=0,
    .GpsLat_en=1,
    .GpsLat_panel=1,
    .GpsLat_posX=GRAPHICS_RIGHT - 10,
    .GpsLat_posY=GRAPHICS_BOTTOM - 38,
    .GpsLat_fontsize=0,
    .GpsLat_align=2,
    .GpsLon_en=1,
    .GpsLon_panel=1,
    .GpsLon_posX=GRAPHICS_RIGHT - 10,
    .GpsLon_posY=GRAPHICS_BOTTOM - 28,
    .GpsLon_fontsize=0,
    .GpsLon_align=2,
    .Gps2Status_en=1,
    .Gps2Status_panel=2,
    .Gps2Status_posX=0,
    .Gps2Status_posY=GRAPHICS_BOTTOM - 38,
    .Gps2Status_fontsize=0,
    .Gps2Status_align=0,
    .Gps2HDOP_en=1,
    .Gps2HDOP_panel=2,
    .Gps2HDOP_posX=70,
    .Gps2HDOP_posY=GRAPHICS_BOTTOM - 38,
    .Gps2HDOP_fontsize=0,
    .Gps2HDOP_align=0,
    .Gps2Lat_en=1,
    .Gps2Lat_panel=2,
    .Gps2Lat_posX=GRAPHICS_RIGHT - 88,
    .Gps2Lat_posY=GRAPHICS_BOTTOM - 38,
    .Gps2Lat_fontsize=0,
    .Gps2Lat_align=0,
    .Gps2Lon_en=1,
    .Gps2Lon_panel=2,
    .Gps2Lon_posX=GRAPHICS_RIGHT - 8,
    .Gps2Lon_posY=GRAPHICS_BOTTOM - 38,
    .Gps2Lon_fontsize=0,
    .Gps2Lon_align=0,
    .Time_en=1,
    .Time_panel=1,
    .Time_posX=GRAPHICS_RIGHT - 10,
    .Time_posY=15,
    .Time_fontsize=0,
    .Time_align=2,
    .TALT_en=1,
    .TALT_panel=2,
    .TALT_posX=5,
    .TALT_posY=10,
    .TALT_fontsize=0,
    .TALT_align=0,
    .Alt_Scale_en=1,
    .Alt_Scale_panel=1,
    .Alt_Scale_posX=GRAPHICS_RIGHT - 10,
    .Alt_Scale_posY=GRAPHICS_Y_MIDDLE,
    .Alt_Scale_align=1,
    .Alt_Scale_source=1,
    .TSPD_en=1,
    .TSPD_panel=3,
    .TSPD_posX=10,
    .TSPD_posY=GRAPHICS_BOTTOM - 100,
    .TSPD_fontsize=0,
    .TSPD_align=0,
    .Speed_scale_en=1,
    .Speed_scale_panel=1,
    .Speed_scale_posX=10,
    .Speed_scale_align=0,
    .Speed_scale_source=0,
    .Speed_scale_posY=GRAPHICS_Y_MIDDLE,
    .Throt_en=1,
    .Throt_panel=1,
    .Throt_scale_en=0,
    .Throt_posX=GRAPHICS_RIGHT - 10,
    .Throt_posY=GRAPHICS_BOTTOM - 100,
    .CWH_home_dist_en=1,
    .CWH_home_dist_panel=1,
    .CWH_home_dist_posX=25,
    .CWH_home_dist_posY=85,
    .CWH_home_dist_fontsize=0,
    .CWH_home_dist_align=0,
    .CWH_wp_dist_en=0,
    .CWH_wp_dist_panel=0,
    .CWH_wp_dist_posX=40,
    .CWH_wp_dist_posY=24,
    .CWH_wp_dist_fontsize=0,
    .CWH_wp_dist_align=0,
    .CWH_Tmode_en=1,
    .CWH_Tmode_panel=1,
    .CWH_Tmode_posY=15,
    .CWH_Nmode_en=1,
    .CWH_Nmode_panel=1,
    .CWH_Nmode_posX=45,
    .CWH_Nmode_posY=45,
    .CWH_Nmode_radius=30,
    .CWH_Nmode_home_radius=35,
    .CWH_Nmode_wp_radius=35,
    .Atti_mp_en=1,
    .Atti_mp_panel=1,
    .Atti_mp_mode=0,
    .Atti_3D_en=1,
    .Atti_3D_panel=2,
    .Units_mode=0,
    .Max_panels=1,
    .PWM_Video_en=1,
    .PWM_Video_ch=8,
    .PWM_Video_value=1200,
    .PWM_Panel_en=0,
    .PWM_Panel_ch=0,
    .PWM_Panel_value=1200,
    .Alarm_posX=GRAPHICS_X_MIDDLE,
    .Alarm_posY=GRAPHICS_BOTTOM - 38,
    .Alarm_fontsize=1,
    .Alarm_align=1,
    .Alarm_GPS_status_en=1,
    .Alarm_low_batt_en=1,
    .Alarm_low_batt=20,
    .Alarm_low_speed_en=0,
    .Alarm_low_speed=2,
    .Alarm_over_speed_en=0,
    .Alarm_over_speed=100,
    .Alarm_low_alt_en=0,
    .Alarm_low_alt=10,
    .Alarm_over_alt_en=0,
    .Alarm_over_alt=1000,
    .Alarm_rc_status_en=1,
    .Alarm_wfb_status_en=1,
    .ClimbRate_en=1,
    .ClimbRate_panel=1,
    .ClimbRate_posX=GRAPHICS_RIGHT - 70,
    .ClimbRate_posY=GRAPHICS_Y_MIDDLE,
    .ClimbRate_fontsize=0,
    .RSSI_en=1,
    .RSSI_type=0,
    .RSSI_panel=1,
    .RSSI_posX=72,
    .RSSI_posY=GRAPHICS_BOTTOM - 38,
    .RSSI_fontsize=0,
    .RSSI_align=0,
    .RSSI_min=0,
    .RSSI_max=100,
    .RSSI_raw_en=0,
    .FC_Protocol=0,
    .Wind_en=1,
    .Wind_panel=2,
    .Wind_posX=10,
    .Wind_posY=100,
    .Time_type=0,
    .Throttle_Scale_Type=1,
    .Atti_mp_posX=GRAPHICS_X_MIDDLE,
    .Atti_mp_posY=GRAPHICS_Y_MIDDLE,
    .Atti_mp_scale_real=1,
    .Atti_mp_scale_frac=0,
    .Atti_3D_posX=GRAPHICS_X_MIDDLE,
    .Atti_3D_posY=GRAPHICS_Y_MIDDLE,
    .Atti_3D_scale_real=1,
    .Atti_3D_scale_frac=0,
    .Atti_3D_map_radius=40,
    .osd_offsetY=0,
    .osd_offsetX=0,
    .firmware_ver=10,
    .video_mode=1,
    .BattConsumed_panel=1,
    .BattConsumed_posX=65,
    .BattConsumed_posY=GRAPHICS_BOTTOM - 38,
    .BattConsumed_fontsize=0,
    .BattConsumed_align=0,
    .TotalTripDist_panel=0,
    .TotalTripDist_posX=GRAPHICS_RIGHT - 10,
    .TotalTripDist_posY=GRAPHICS_BOTTOM - 78,
    .TotalTripDist_fontsize=0,
    .TotalTripDist_align=2,
    .Map_en=1,
    .Map_panel=4,
    .Map_radius=120,
    .Map_fontsize=1,
    .Map_H_align=0,
    .Map_V_align=0,
    .Relative_ALT_en=1,
    .Relative_ALT_panel=2,
    .Relative_ALT_posX=5,
    .Relative_ALT_posY=25,
    .Relative_ALT_fontsize=0,
    .Relative_ALT_align=0,
    .Alt_Scale_type=1,
    .Air_Speed_en=1,
    .Air_Speed_panel=2,
    .Air_Speed_posX=5,
    .Air_Speed_posY=GRAPHICS_BOTTOM - 88,
    .Air_Speed_fontsize=0,
    .Air_Speed_align=0,
    .Spd_Scale_type=0,
    .osd_offsetX_sign=0,
    .uart_bandrate=7,
    .Atti_mp_type=1,
    .Efficiency_en=0,
    .Efficiency_panel=0,
    .Efficiency_posX=GRAPHICS_RIGHT - 10,
    .Efficiency_posY=GRAPHICS_BOTTOM - 88,
    .Efficiency_fontsize=0,
    .Efficiency_align=2,
    .PWM_Video_mode=1,
    .PWM_Panel_mode=1,
    .LinkQuality_en=0,
    .LinkQuality_panel=0,
    .LinkQuality_posX=150,
    .LinkQuality_posY=GRAPHICS_BOTTOM - 53,
    .LinkQuality_fontsize=0,
    .LinkQuality_align=0,
    .LinkQuality_chan=5,
    .LinkQuality_min=1000,
    .LinkQuality_max=2000,
    .LinkQuality_type=0,
    .Vario_Graph_enabled=0,
    .Vario_Graph_panel=0,
    .Vario_Graph_posX=GRAPHICS_BOTTOM - 88,
    .Vario_Graph_posY=GRAPHICS_BOTTOM - 88,
    .HomeDirection_enabled=0,
    .HomeDirection_panel=1,
    .HomeDirection_posX=35,
    .HomeDirection_posY=65,
    .HomeLatitude_enabled=0,
    .HomeLatitude_panel=0,
    .HomeLatitude_posX=184,
    .HomeLatitude_posY=GRAPHICS_BOTTOM - 48,
    .HomeLatitude_fontsize=0,
    .HomeLatitude_align=0,
    .HomeLongitude_enabled=0,
    .HomeLongitude_panel=0,
    .HomeLongitude_posX=GRAPHICS_BOTTOM - 24,
    .HomeLongitude_posY=GRAPHICS_BOTTOM - 48,
    .HomeLongitude_fontsize=0,
    .HomeLongitude_align=0,
    .WFBState_en=1,
    .WFBState_panel=1,
    .WFBState_posX=72,
    .WFBState_posY=GRAPHICS_BOTTOM - 28,
    .WFBState_fontsize=0,
    .WFBState_align=0,
};
