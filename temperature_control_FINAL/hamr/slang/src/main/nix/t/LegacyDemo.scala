// #Sireum

package t

import org.sireum._
import art._

// This file was auto-generated.  Do not edit

object LegacyDemo extends App {
  def main(args: ISZ[String]): Z = {

    val seed: Z = if (args.size == z"1") {
      val n = Z(args(0)).get
      if (n == z"0") 1 else n
    } else {
      1
    }

    Platform.initialise(seed, None())

    val empty = art.Empty()

    Platform.sendAsync(IPCPorts.TempSensor_i_tsp_tempSensor_App, IPCPorts.TempSensor_i_tsp_tempSensor_App, empty)
    Platform.sendAsync(IPCPorts.TempControl_i_tcp_tempControl_App, IPCPorts.TempControl_i_tcp_tempControl_App, empty)
    Platform.sendAsync(IPCPorts.Fan_i_fp_fan_App, IPCPorts.Fan_i_fp_fan_App, empty)

    Platform.finalise()
    return 0
  }
}
