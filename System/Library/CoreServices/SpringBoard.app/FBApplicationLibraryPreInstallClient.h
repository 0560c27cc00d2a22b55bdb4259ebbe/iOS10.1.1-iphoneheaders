/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBApplicationLibraryPreInstallClient <FBApplicationLibraryObserver>
@optional
-(void)applicationLibrary:(id)arg1 _willNotify_didAddPlaceholders:(id)arg2 completion:(/*^block*/id)arg3;
-(void)applicationLibrary:(id)arg1 _willNotify_didAddApplications:(id)arg2 completion:(/*^block*/id)arg3;
-(void)applicationLibrary:(id)arg1 _willNotify_didCancelPlaceholders:(id)arg2 completion:(/*^block*/id)arg3;
-(void)applicationLibrary:(id)arg1 _willNotify_didReplaceApplications:(id)arg2 withApplications:(id)arg3 completion:(/*^block*/id)arg4;
-(void)applicationLibrary:(id)arg1 _willNotify_didRemoveApplications:(id)arg2 completion:(/*^block*/id)arg3;
-(void)applicationLibrary:(id)arg1 _willNotify_didDemoteApplications:(id)arg2 completion:(/*^block*/id)arg3;

@end

