/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKSignatureGenerator : NSObject {

	BOOL _valid;
	void* _generator;

}

@property (assign,nonatomic) void* generator;                        //@synthesize generator=_generator - In the implementation block
@property (assign,getter=isValid,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
+(BOOL)isValidSignature:(id)arg1 ;
+(id)signatureWithFileDescriptor:(int)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(char*)_newSignatureByFinishingGenerator;
-(void*)generator;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)dataByFinishingSignature;
-(void)updateWithData:(id)arg1 ;
-(void)setValid:(BOOL)arg1 ;
-(void)setGenerator:(void*)arg1 ;
@end

