//
// Created by James Hildebrand on 8/27/20.
//

#ifndef SHIFTERMODULE_CANBUSHELPER_H
#define SHIFTERMODULE_CANBUSHELPER_H

#include <ConfigHelper.h>
#include <mcp_can.h>


class CanBusHelper {
public:
	CanBusHelper(CONFIG& config, SHIFTER& position);

//	void init(CAN_BUS_CFG& config);

	void buildMessage();

	void sendMessage();

	void receiveMessage();

private:
	CONFIG & _config;
	SHIFTER& _position;

	void setMasks() const;

	void handleMessage();
};

#endif //SHIFTERMODULE_CANBUSHELPER_H
