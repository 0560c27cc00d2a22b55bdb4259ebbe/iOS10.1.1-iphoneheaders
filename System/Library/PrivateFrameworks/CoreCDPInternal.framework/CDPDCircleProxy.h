/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CDPContext;


@protocol CDPDCircleProxy <NSObject>
@property (nonatomic,retain) CDPContext * cdpContext; 
@required
+(BOOL)canAuthenticate;
-(id)initWithContext:(id)arg1;
-(id)peerId;
-(unsigned long long)peerCount;
-(int)circleStatus:(id*)arg1;
-(id)peerDeviceNamesByPeerID;
-(BOOL)synchronizeCircleViews;
-(BOOL)removeThisDeviceFromCircle:(id*)arg1;
-(BOOL)requestToJoinCircle:(id*)arg1;
-(BOOL)requestToJoinCircleAfterRestore:(id*)arg1;
-(BOOL)requestToResetCircle:(id*)arg1;
-(BOOL)viewMemberForAutofillPasswords:(id*)arg1;
-(BOOL)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id*)arg2;
-(BOOL)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2;
-(BOOL)hasNonViewAwarePeers;
-(BOOL)removeNonViewAwarePeers:(id*)arg1;
-(BOOL)isLastBackupMakingPeer:(id*)arg1;
-(CDPContext *)cdpContext;
-(void)setCdpContext:(id)arg1;

@end

