/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <profiled/MCNewPayloadHandler.h>

@interface MCEDUClassroomPayloadHandler : MCNewPayloadHandler
-(BOOL)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id*)arg4 ;
-(void)unsetAside;
-(void)setAside;
-(id)configurationWithError:(id*)arg1 ;
-(id)_persistentIDForPayloadUUID:(id)arg1 requireIdentity:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)setConfiguration:(id)arg1 error:(id*)arg2 ;
-(BOOL)_installWithError:(id*)arg1 ;
-(void)_remove;
-(void)remove;
-(BOOL)isInstalled;
@end

