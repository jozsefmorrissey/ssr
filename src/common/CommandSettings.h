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

#pragma once
#include <sys/types.h>

#include "Global.h"

static class CommandSettings {

private:
	bool init;
	std::string output_file;
	std::string audio_profile_name;
	std::string video_profile_name;
	std::string termination_timer;

public:
	void Initialize(std::string _output_file, std::string _audio_profile_name,
		std::string _video_profile_name, std::string _termination_timer);

	std::string GetOutPutFile();
	std::string GetAudioProfileName();
	std::string GetVideoProfileName();
	std::string GetTerminationTimer();
};
