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
#include "Logger.h"

QString CommandSettings::output_file = NULL;
QString CommandSettings::audio_profile_name = NULL;
QString CommandSettings::video_profile_name = NULL;
int CommandSettings::termination_timer = 0;
bool CommandSettings::record_on_start = false;

QString CommandSettings::GetOutputFile() {return output_file;}
QString CommandSettings::GetInputProfileName() {return input_profile_name;}
QString CommandSettings::GetOutputProfileName() {return output_profile_name;}
int CommandSettings::GetTerminationTimer() {return termination_timer;}
bool CommandSettings::ShouldRecordOnStart() {return record_on_start;}

void CommandSettings::SetOutputFile(QString _output_file) {
	output_file = _output_file;
}

void CommandSettings::SetInputProfileName(QString _input_profile_name) {
	input_profile_name = _input_profile_name;
}

void CommandSettings::SetOutputProfileName(QString _output_profile_name) {
	output_profile_name = _output_profile_name;
}

void CommandSettings::SetTerminationTimer(QString _termination_timer) {
	// TODO: error check
	termination_timer = _termination_timer.toInt();
}

void CommandSettings::SetRecordOnStart(bool _record_on_start) {
	record_on_start = _record_on_start;
}
