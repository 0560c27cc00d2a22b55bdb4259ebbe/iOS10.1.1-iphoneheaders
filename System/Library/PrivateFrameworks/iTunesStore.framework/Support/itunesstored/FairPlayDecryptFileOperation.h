/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSString, FairPlayDecryptSession;

@interface FairPlayDecryptFileOperation : ISOperation {

	NSData* _dpInfo;
	double _lastSnapshotTime;
	NSString* _path;
	FairPlayDecryptSession* _fairplayDecryptSession;

}
-(void)_updateProgressWithByteCount:(long long)arg1 ;
-(id)initWithPath:(id)arg1 dpInfo:(id)arg2 ;
-(BOOL)_decryptWithSession:(id)arg1 error:(id*)arg2 ;
-(void)_initializeProgressWithFileHandle:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)run;
@end

