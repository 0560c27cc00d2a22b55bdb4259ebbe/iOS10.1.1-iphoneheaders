/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSAbstractFacilityService.h>

@class SBSSystemServiceClient;

@interface SBSAbstractSystemService : SBSAbstractFacilityService

@property (nonatomic,readonly) SBSSystemServiceClient * client; 
+(Class)serviceFacilityClientClass;
-(SBSSystemServiceClient *)client;
@end

