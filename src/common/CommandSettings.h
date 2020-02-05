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
#include "Global.h"

class CommandSettings {

private:
	static bool init;
	static QString output_file;
	static QString audio_profile_name;
	static QString video_profile_name;
	static QString termination_timer;

public:
	static void Initialize(QString _output_file, QString _audio_profile_name,
		QString _video_profile_name, QString _termination_timer);

	static QString GetOutPutFile();
	static QString GetAudioProfileName();
	static QString GetVideoProfileName();
	static QString GetTerminationTimer();
};
