
# joint type
uint8 type
uint8 REVOLUTE    = 0                # single DOF
uint8 CONTINUOUS  = 1                # single DOF (revolute w/o limits)
uint8 PRISMATIC   = 2                # single DOF
uint8 FIXED       = 3                # 0 DOF
uint8 BALL        = 4                # 3 DOF movement, 0 DOF control
uint8 UNIVERSAL   = 5                # 2 DOF
# dynamics properties
float64[] damping
# joint state
float64[] position
float64[] rate                       # TODO(chapulina) Rename to velocity
# service return status
bool success                         # return true if get successful
string status_message                # comments if available
