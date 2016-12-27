/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPCryptoInfo.h>

@class SFUCryptoKey, NSArray, NSString;

@interface TSPCryptoInfoInternal : NSObject <TSPCryptoInfo> {

	SFUCryptoKey* _cryptoKey;
	unsigned long long _preferredBlockSize;
	NSArray* _blockInfos;
	unsigned long long _decodedLength;

}

@property (nonatomic,retain) NSArray * blockInfos;                                 //@synthesize blockInfos=_blockInfos - In the implementation block
@property (assign,nonatomic) unsigned long long decodedLength;                     //@synthesize decodedLength=_decodedLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SFUCryptoKey * cryptoKey;                           //@synthesize cryptoKey=_cryptoKey - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredBlockSize;              //@synthesize preferredBlockSize=_preferredBlockSize - In the implementation block
@property (nonatomic,readonly) BOOL hasDecodedLength; 
-(SFUCryptoKey *)cryptoKey;
-(unsigned long long)decodedLength;
-(id)mutableCryptoInfoCopy;
-(BOOL)hasDecodedLength;
-(NSArray *)blockInfos;
-(unsigned long long)preferredBlockSize;
-(id)initWithCryptoKey:(id)arg1 preferredBlockSize:(unsigned long long)arg2 blockInfos:(id)arg3 decodedLength:(unsigned long long)arg4 ;
-(id)initWithCryptoInfo:(id)arg1 ;
-(void)setBlockInfos:(NSArray *)arg1 ;
-(void)setDecodedLength:(unsigned long long)arg1 ;
@end

