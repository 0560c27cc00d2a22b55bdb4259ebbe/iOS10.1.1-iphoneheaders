/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCSolArticleID, NSSet;

@interface FCSolMergeableArticle : NSObject {

	FCSolArticleID* _articleId;
	NSSet* _tagIds;
	long long _degree;

}

@property (nonatomic,retain) FCSolArticleID * articleId;              //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,retain) NSSet * tagIds;                          //@synthesize tagIds=_tagIds - In the implementation block
@property (assign,nonatomic) long long degree;                        //@synthesize degree=_degree - In the implementation block
-(long long)degree;
-(void)setDegree:(long long)arg1 ;
-(id)initWithArticleId:(id)arg1 tagIds:(id)arg2 degree:(long long)arg3 ;
-(FCSolArticleID *)articleId;
-(void)setArticleId:(FCSolArticleID *)arg1 ;
-(NSSet *)tagIds;
-(void)setTagIds:(NSSet *)arg1 ;
@end

