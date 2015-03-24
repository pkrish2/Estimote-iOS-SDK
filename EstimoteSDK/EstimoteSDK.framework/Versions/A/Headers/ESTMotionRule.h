//
//  ESTMovementRule.h
//  EstimoteSDK
//
//  Version: 3.0.1
//  Copyright (c) 2013 Estimote. All rights reserved.
//

#import "ESTNearableRule.h"

/**
 * The `ESTMotionRule` class defines single rule related to motion state of the Estimote nearable device.
 */
@interface ESTMotionRule : ESTNearableRule

@property (nonatomic, assign) BOOL motionState;

+ (instancetype)motionStateEquals:(BOOL)motionState forNearableIdentifier:(NSString *)identifier;
+ (instancetype)motionStateEquals:(BOOL)motionState forNearableType:(ESTNearableType)type;

@end