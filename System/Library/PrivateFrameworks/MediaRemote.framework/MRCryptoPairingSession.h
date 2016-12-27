/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRCryptoPairingSessionDelegate;
#import <MediaRemote/MediaRemote-Structs.h>
@class NSString;

@interface MRCryptoPairingSession : NSObject {

	BOOL _valid;
	unsigned long long _role;
	NSString* _peerIdentifier;
	id<MRCryptoPairingSessionDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long role;                                //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) NSString * peerIdentifier;                              //@synthesize peerIdentifier=_peerIdentifier - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                              //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) id<MRCryptoPairingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setDelegate:(id<MRCryptoPairingSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<MRCryptoPairingSessionDelegate>)delegate;
-(BOOL)isValid;
-(void)close;
-(void)open;
-(BOOL)handlePairingExchangeData:(id)arg1 withError:(id*)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 peerIdentifier:(id)arg2 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(BOOL)deleteIdentityWithError:(id*)arg1 ;
-(unsigned long long)role;
-(NSString *)peerIdentifier;
@end

