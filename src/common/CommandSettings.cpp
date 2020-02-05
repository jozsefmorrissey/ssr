/*
Copyright (c) 2012-2017 Maarten Baert <maarten-baert@hotmail.com>

This file is part of SimpleScreenRecorder.

SimpleScreenRecorder is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

SimpleScreenRecorder is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with SimpleScreenRecorder.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "CommandSettings.h"

CommandSettings::init = false;

CommandSettings::Initialize(std::string _output_file,
			std::string _audio_profile_name,
			std::string _video_profile_name,
			std::string _termination_timer) {
	if (!init) {
		init = true;
		output_file = _output_file;
		audio_profile_name = _audio_profile_name;
		video_profile_name = _video_profile_name;
		termination_timer = _termination_timer;
		m_main_window = main_window;
	}
}

std::string CommandSettings::GetOutPutFile() {return output_file;}
std::string CommandSettings::GetAudioProfileName() {return audio_profile_name;}
std::string CommandSettings::GetVideoProfileName() {return video_profile_name;}
std::string CommandSettings::GetTerminationTimer() {return termination_timer;}
