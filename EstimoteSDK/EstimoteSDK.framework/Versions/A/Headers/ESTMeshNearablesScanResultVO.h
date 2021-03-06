//
//   ______     _   _                 _          _____ _____  _  __
//  |  ____|   | | (_)               | |        / ____|  __ \| |/ /
//  | |__   ___| |_ _ _ __ ___   ___ | |_ ___  | (___ | |  | | ' /
//  |  __| / __| __| | '_ ` _ \ / _ \| __/ _ \  \___ \| |  | |  <
//  | |____\__ \ |_| | | | | | | (_) | ||  __/  ____) | |__| | . \
//  |______|___/\__|_|_| |_| |_|\___/ \__\___| |_____/|_____/|_|\_\
//
//
//  Copyright © 2017 Estimote. All rights reserved.

#import <Foundation/Foundation.h>

/**
 ESTMeshNearablesScanResultVO represents single sticker discovery
 recored delivered in mesh scan report.
 */
@interface ESTMeshNearablesScanResultVO : NSObject


/**
 Identifier of discovered device.
 */
@property (nonatomic, strong, readonly) NSString *deviceIdentifier;

/**
 RSSI (Strength of the signal) of discovered device.
 */
@property (nonatomic, strong, readonly) NSNumber *rssi;

/**
 Measured Power (Strength of the signal from 1m) of discovered device.
 Default value is -45 dBm.
 */
@property (nonatomic, strong, readonly) NSNumber *measuredPower;

/**
 Distance calculated from the RSSI and measured power.
 */
@property (nonatomic, strong, readonly, getter = getDistance) NSNumber *distance;

/**
 Designated initializer parsing provided data to properties.

 @param data Data of single result.
 @return Initialized result object.
 */
- (instancetype)initWithData:(NSData *)data;

/**
 Initializer of class taking actual values of properties.

 @param deviceIdentifier Identifier of discovered device.
 @param rssi Strength of the signal of discovered device.
 @return Initialized object
 */
- (instancetype)initWithIdentifier:(NSString *)deviceIdentifier
                              rssi:(NSNumber *)rssi;

@end
