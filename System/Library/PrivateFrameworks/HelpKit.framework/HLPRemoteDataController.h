/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HLPURLSession, NSURL;

@interface HLPRemoteDataController : NSObject {

	HLPURLSession* _URLSession;
	BOOL _loading;
	BOOL _hasLoaded;
	NSURL* _URL;

}

@property (assign,nonatomic) BOOL loading;                //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL hasLoaded;              //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (nonatomic,copy) NSURL * URL;                   //@synthesize URL=_URL - In the implementation block
-(void)cancel;
-(void)dealloc;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)hasLoaded;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)clearData;
-(void)fetchDataWithDataType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processFileURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)processData:(id)arg1 formattedData:(id)arg2 ;
@end

