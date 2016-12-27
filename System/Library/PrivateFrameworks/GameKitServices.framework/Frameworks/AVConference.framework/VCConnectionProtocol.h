/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol VCConnectionProtocol <NSObject>
@property (readonly) BOOL isLocalOnWiFi; 
@property (readonly) BOOL isRemoteOnWiFi; 
@property (readonly) BOOL isLocalOnCellular; 
@property (readonly) BOOL isRemoteOnCellular; 
@property (readonly) BOOL isIPv6; 
@property (assign) int cellularMTU; 
@property (readonly) BOOL isRelay; 
@property (readonly) BOOL isVPN; 
@property (readonly) int localConnectionType; 
@property (readonly) int remoteConnectionType; 
@property (assign) int localCellTech; 
@property (assign) int remoteCellTech; 
@property (assign) int priority; 
@property (readonly) unsigned type; 
@property (readonly) NSString * localInterfaceTypeString; 
@property (readonly) NSString * remoteInterfaceTypeString; 
@required
-(unsigned)type;
-(int)priority;
-(void)setPriority:(int)arg1;
-(BOOL)isLocalOnWiFi;
-(BOOL)isRemoteOnWiFi;
-(BOOL)isRelay;
-(int)localCellTech;
-(int)remoteCellTech;
-(BOOL)isLocalOnCellular;
-(BOOL)isRemoteOnCellular;
-(BOOL)isSameAsConnection:(id)arg1;
-(BOOL)isOnSameInterfacesWithConnection:(id)arg1;
-(void)getSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1;
-(BOOL)matchesSourceDestinationInfo:(tagVCSourceDestinationInfo*)arg1;
-(int)cellularMTU;
-(void)setCellularMTU:(int)arg1;
-(BOOL)isVPN;
-(int)localConnectionType;
-(int)remoteConnectionType;
-(void)setLocalCellTech:(int)arg1;
-(void)setRemoteCellTech:(int)arg1;
-(NSString *)localInterfaceTypeString;
-(NSString *)remoteInterfaceTypeString;
-(BOOL)isIPv6;

@end

