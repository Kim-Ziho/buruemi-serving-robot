# set urdf joint effort
string joint_name                       # joint to apply wrench (linear force and torque)
float64 effort                          # effort to apply
builtin_interfaces/Time start_time      # optional wrench application start time (seconds)
                                        # if start_time < current time, start as soon as possible
builtin_interfaces/Duration  duration   # optional duration of wrench application time (seconds)
                                        # if duration < 0, apply wrench continuously without end
                                        # if duration = 0, do nothing
                                        # if duration < step size, assume step size and
                                        # display warning in status_message
