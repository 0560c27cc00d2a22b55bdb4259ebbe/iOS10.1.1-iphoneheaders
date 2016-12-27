/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSKSharingState : NSObject <NSCopying> {

	BOOL _shared;

}

@property (nonatomic,readonly) BOOL shared; 
+(id)notSharedSharingState;
-(id)initWithSharingState:(id)arg1 ;
-(id)initWithShared:(BOOL)arg1 sharedToMe:(BOOL)arg2 ownerName:(id)arg3 ;
-(id)initWithShared:(BOOL)arg1 shareIdentifier:(NSObject*)arg2 ;
-(id)initWithShared:(BOOL)arg1 sharedToMe:(BOOL)arg2 ownerName:(id)arg3 readOnlyPublicPermissions:(BOOL)arg4 readOnlyUserPermissions:(BOOL)arg5 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shared;
@end

