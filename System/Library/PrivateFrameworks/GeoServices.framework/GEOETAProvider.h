/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOETAProvider : NSObject
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)startRequest:(id)arg1 connectionProperties:(const SCD_Struct_GE105*)arg2 willSendRequest:(/*^block*/id)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)updateRequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)startSimpleETARequest:(id)arg1 finished:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)cancelRequest;
@end

