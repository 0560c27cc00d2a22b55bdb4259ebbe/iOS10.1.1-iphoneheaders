/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, CVMLRequest, PVCanceler;

@interface PVSuggestionRequest : NSObject {

	NSString* _requestId;
	NSSet* _csns;
	/*^block*/id _updateHandler;
	CVMLRequest* _cvmlRequest;
	PVCanceler* _canceller;

}

@property (readonly) NSString * requestId;                 //@synthesize requestId=_requestId - In the implementation block
@property (readonly) NSSet * csns;                         //@synthesize csns=_csns - In the implementation block
@property (copy) id updateHandler;                         //@synthesize updateHandler=_updateHandler - In the implementation block
@property (retain) CVMLRequest * cvmlRequest;              //@synthesize cvmlRequest=_cvmlRequest - In the implementation block
@property (readonly) PVCanceler * canceller;               //@synthesize canceller=_canceller - In the implementation block
+(id)requestWithFaceCSNs:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(NSString *)requestId;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(id)initWithFaceCSNs:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(NSSet *)csns;
-(CVMLRequest *)cvmlRequest;
-(void)setCvmlRequest:(CVMLRequest *)arg1 ;
-(PVCanceler *)canceller;
@end
