/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSBasicSceneHostAgent.h>

@class FBSSceneActivitySession;

@interface SBCustomSceneHostAgent : FBSBasicSceneHostAgent {

	FBSSceneActivitySession* _session;

}
-(void)didReceiveMessage:(id)arg1 fromCounterpartAgent:(id)arg2 withResponseSender:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)scene:(id)arg1 didInitializeWithEvent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)scene:(id)arg1 willInvalidateWithEvent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)scene:(id)arg1 handleEvent:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)scene:(id)arg1 reviewEvent:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
@end
