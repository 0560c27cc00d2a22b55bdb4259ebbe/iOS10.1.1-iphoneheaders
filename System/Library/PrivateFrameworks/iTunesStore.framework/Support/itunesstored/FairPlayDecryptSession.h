/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface FairPlayDecryptSession : NSObject {

	NSData* _dpInfo;
	void* _decryptSession;
	NSString* _identifier;

}
-(id)initWithDPInfo:(id)arg1 ;
-(id)decryptBytes:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)identifier;
@end

