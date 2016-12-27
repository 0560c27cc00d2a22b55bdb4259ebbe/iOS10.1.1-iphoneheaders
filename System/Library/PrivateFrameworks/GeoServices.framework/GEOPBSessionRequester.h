/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol GEOPBSessionRequesterDelegate;
@class NSURL, NSOperationQueue, NSURLSession, NSURLSessionTask, NSMutableData, PBDataReader, NSMutableArray, NSDictionary, NSMutableDictionary, NSString, NSArray;

@interface GEOPBSessionRequester : NSObject <NSURLSessionDataDelegate> {

	NSURL* _URL;
	id<GEOPBSessionRequesterDelegate> _delegate;
	NSOperationQueue* _delegateQueue;
	NSURLSession* _session;
	NSURLSessionTask* _currentTask;
	NSOperationQueue* _sessionDelegateQ;
	NSMutableData* _data;
	PBDataReader* _dataReader;
	unsigned long long _lastGoodDataOffset;
	unsigned long long _uploadPayloadSize;
	unsigned long long _downloadPayloadSize;
	unsigned long long _timeRequestSent;
	unsigned long long _timeResponseReceived;
	long long _responseStatusCode;
	NSMutableArray* _requests;
	NSMutableArray* _responses;
	NSMutableArray* _internalRequests;
	NSMutableArray* _internalResponses;
	NSDictionary* _httpResponseHeaders;
	NSMutableDictionary* _httpRequestHeaders;
	double _timeoutSeconds;
	NSString* _logRequestToFile;
	NSString* _logResponseToFile;
	BOOL _didNotifyRequestCompleted;
	NSArray* _clientCertificates;
	NSDictionary* _connectionProperties;
	BOOL _shouldHandleCookies;
	struct {
		unsigned ignoresResponse : 1;
		unsigned loading : 1;
		unsigned needsCancel : 1;
		unsigned responseStatusSet : 1;
		unsigned parsedResponseHeader : 1;
		unsigned delegateDidReceiveResponse : 1;
		unsigned delegateDidFinish : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidFailWithError : 1;
		unsigned paused : 1;
		unsigned resuming : 1;
	}  _flags;

}

@property (assign) BOOL needsCancel; 
@property (nonatomic,retain) NSURL * URL;                                                    //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic,__weak) id<GEOPBSessionRequesterDelegate> delegate; 
@property (nonatomic,retain) NSURLSession * session;                                         //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * currentTask;                                 //@synthesize currentTask=_currentTask - In the implementation block
@property (assign,nonatomic) BOOL ignoresResponse; 
@property (nonatomic,retain) NSString * logRequestToFile;                                    //@synthesize logRequestToFile=_logRequestToFile - In the implementation block
@property (nonatomic,retain) NSString * logResponseToFile;                                   //@synthesize logResponseToFile=_logResponseToFile - In the implementation block
@property (nonatomic,readonly) NSArray * requests; 
@property (nonatomic,readonly) unsigned long long uploadPayloadSize;                         //@synthesize uploadPayloadSize=_uploadPayloadSize - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadPayloadSize;                       //@synthesize downloadPayloadSize=_downloadPayloadSize - In the implementation block
@property (nonatomic,readonly) unsigned long long requestResponseTime; 
@property (assign,nonatomic) double timeoutSeconds;                                          //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,retain) NSArray * clientCertificates;                                   //@synthesize clientCertificates=_clientCertificates - In the implementation block
@property (nonatomic,copy) NSDictionary * httpRequestHeaders; 
@property (nonatomic,retain) NSDictionary * httpResponseHeaders;                             //@synthesize httpResponseHeaders=_httpResponseHeaders - In the implementation block
@property (assign,nonatomic) BOOL shouldHandleCookies;                                       //@synthesize shouldHandleCookies=_shouldHandleCookies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)usesEncodedMessages;
-(void)cancel;
-(void)setDelegate:(id<GEOPBSessionRequesterDelegate>)arg1 ;
-(void)dealloc;
-(id<GEOPBSessionRequesterDelegate>)delegate;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)_start;
-(void)start;
-(void)_cleanup;
-(void)resume;
-(void)pause;
-(BOOL)isPaused;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)clearRequests;
-(void)addRequest:(id)arg1 ;
-(NSArray *)requests;
-(id)initWithURL:(id)arg1 andDelegate:(id)arg2 ;
-(void)setNeedsCancel;
-(void)startWithConnectionProperties:(id)arg1 ;
-(void)_logRequestsIfNecessary:(id)arg1 ;
-(void)_logResponsesIfNecessary:(id)arg1 ;
-(void)_logErrorIfNecessary:(id)arg1 ;
-(NSString *)logRequestToFile;
-(NSString *)logResponseToFile;
-(id)requestPreamble;
-(id)newMutableURLRequestWithURL:(id)arg1 ;
-(id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2 connectionProperties:(id)arg3 ;
-(void)_scheduleThrottlingErrorForKey:(id)arg1 ;
-(void)_scheduleThrottlingError;
-(id)_osVersion;
-(id)_languageLocale;
-(BOOL)ignoresResponse;
-(void)setIgnoresResponse:(BOOL)arg1 ;
-(void)_didSetDelegate:(id)arg1 ;
-(BOOL)needsCancel;
-(void)setNeedsCancel:(BOOL)arg1 ;
-(id)responseForRequest:(id)arg1 ;
-(id)internalRequests;
-(void)addInternalRequest:(id)arg1 ;
-(id)responseForInternalRequest:(id)arg1 ;
-(void)handleResponse:(id)arg1 forInternalRequest:(id)arg2 ;
-(NSDictionary *)httpRequestHeaders;
-(void)setHttpRequestHeaders:(NSDictionary *)arg1 ;
-(void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2 ;
-(id)_applicationID;
-(void)writeRequest:(id)arg1 into:(id)arg2 ;
-(BOOL)_sendPayload:(id)arg1 error:(id*)arg2 ;
-(void)_serializePayload:(/*^block*/id)arg1 ;
-(void)_cancelNoNotify;
-(void)_performOnDelegateQueue:(/*^block*/id)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(void)_failWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3 ;
-(void)_cancelWithErrorDomain:(id)arg1 errorCode:(long long)arg2 userInfo:(id)arg3 ;
-(void)cancelWithErrorCode:(long long)arg1 description:(id)arg2 ;
-(void)cancelWithErrorCode:(long long)arg1 ;
-(BOOL)readResponsePreamble:(id)arg1 ;
-(id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3 ;
-(BOOL)_tryParseData;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)requestResponseTime;
-(void)encodeRequestData:(id)arg1 startRequestCallback:(/*^block*/id)arg2 ;
-(id)decodeResponseData:(id)arg1 ;
-(id)_newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2 connectionProperties:(id)arg3 ;
-(id)newSessionTaskOnSession:(id)arg1 withURLRequest:(id)arg2 ;
-(NSURLSessionTask *)currentTask;
-(void)setCurrentTask:(NSURLSessionTask *)arg1 ;
-(NSDictionary *)httpResponseHeaders;
-(void)setHttpResponseHeaders:(NSDictionary *)arg1 ;
-(double)timeoutSeconds;
-(void)setTimeoutSeconds:(double)arg1 ;
-(void)setLogRequestToFile:(NSString *)arg1 ;
-(void)setLogResponseToFile:(NSString *)arg1 ;
-(unsigned long long)uploadPayloadSize;
-(unsigned long long)downloadPayloadSize;
-(NSArray *)clientCertificates;
-(void)setClientCertificates:(NSArray *)arg1 ;
-(BOOL)shouldHandleCookies;
-(void)setShouldHandleCookies:(BOOL)arg1 ;
-(NSURLSession *)session;
@end

