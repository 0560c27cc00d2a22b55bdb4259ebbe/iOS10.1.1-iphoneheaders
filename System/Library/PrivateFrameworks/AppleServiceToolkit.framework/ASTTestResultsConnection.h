/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASTConnection.h>
#import <libobjc.A.dylib/ASTTestResultHandling.h>

@protocol ASTConnectionStatusDelegate;
@class NSNumber, NSURLRequest, NSDictionary, NSString;

@interface ASTTestResultsConnection : NSObject <ASTConnection, ASTTestResultHandling> {

	BOOL _retryOnNetworkDisconnected;
	/*^block*/id _didReceiveResponse;
	NSURLRequest* _request;
	long long _networkDisconnectedRetryCount;
	unsigned long long _rootOfTrust;
	id<ASTConnectionStatusDelegate> _delegate;
	long long _state;
	NSNumber* _testId;
	NSDictionary* _testResults;
	NSString* _sessionID;

}

@property (nonatomic,retain) NSDictionary * testResults;                                   //@synthesize testResults=_testResults - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                                         //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id didReceiveResponse;                                          //@synthesize didReceiveResponse=_didReceiveResponse - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                                       //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<ASTConnectionStatusDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long state;                                              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long networkDisconnectedRetryCount;                      //@synthesize networkDisconnectedRetryCount=_networkDisconnectedRetryCount - In the implementation block
@property (assign,nonatomic) BOOL retryOnNetworkDisconnected;                              //@synthesize retryOnNetworkDisconnected=_retryOnNetworkDisconnected - In the implementation block
@property (nonatomic,readonly) unsigned long long rootOfTrust;                             //@synthesize rootOfTrust=_rootOfTrust - In the implementation block
@property (nonatomic,readonly) NSNumber * testId;                                          //@synthesize testId=_testId - In the implementation block
-(void)setDelegate:(id<ASTConnectionStatusDelegate>)arg1 ;
-(id<ASTConnectionStatusDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSURLRequest *)request;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(id)didReceiveResponse;
-(void)setDidReceiveResponse:(id)arg1 ;
-(long long)networkDisconnectedRetryCount;
-(void)setNetworkDisconnectedRetryCount:(long long)arg1 ;
-(BOOL)retryOnNetworkDisconnected;
-(void)setRetryOnNetworkDisconnected:(BOOL)arg1 ;
-(unsigned long long)rootOfTrust;
-(id)generateRequest;
-(NSNumber *)testId;
-(NSDictionary *)testResults;
-(id)initWithTestResults:(id)arg1 sessionID:(id)arg2 ;
-(void)setTestResults:(NSDictionary *)arg1 ;
@end

