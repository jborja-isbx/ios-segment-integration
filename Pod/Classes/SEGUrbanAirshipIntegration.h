/* Copyright Airship and Contributors */

#import <Foundation/Foundation.h>
@import Segment;

@interface SEGUrbanAirshipIntegration : NSObject <SEGIntegration>

@property (nonatomic, strong) NSDictionary *settings;

- (instancetype)initWithSettings:(NSDictionary *)settings;

@end
