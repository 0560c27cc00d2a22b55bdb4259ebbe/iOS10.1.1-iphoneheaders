/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLLibraryManagerDelegate <NSObject>
@optional
-(void)libraryManagerDidChangeConfiguration:(id)arg1;
-(id)displayableName;

@required
-(void)libraryManagerStatusDidChange:(id)arg1;
-(void)libraryManagerDidStartSynchronization:(id)arg1;
-(void)libraryManagerHasChangesToPull:(id)arg1;

@end

