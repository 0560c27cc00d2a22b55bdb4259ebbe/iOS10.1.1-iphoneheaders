/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NRMutableStateProtocol <NSObject,NSSecureCoding,NSCopying,NRMutableStateObserverProtocol,NRMutableStateParentProtocol>
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@required
+(id)diffFrom:(id)arg1 to:(id)arg2;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)applyDiff:(id)arg1;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4;

@end

