/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:42:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCSoftwareUpdateInfo;

@interface MCSoftwareUpdateActionResult : NSObject {

	int _updateAction;
	MCSoftwareUpdateInfo* _updateInfo;

}

@property (assign,nonatomic) int updateAction;                               //@synthesize updateAction=_updateAction - In the implementation block
@property (nonatomic,retain) MCSoftwareUpdateInfo * updateInfo;              //@synthesize updateInfo=_updateInfo - In the implementation block
-(int)updateAction;
-(MCSoftwareUpdateInfo *)updateInfo;
-(void)setUpdateInfo:(MCSoftwareUpdateInfo *)arg1 ;
-(void)setUpdateAction:(int)arg1 ;
@end

