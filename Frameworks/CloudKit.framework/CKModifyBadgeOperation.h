/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface CKModifyBadgeOperation : CKOperation {
    unsigned int _badgeValue;
    id _modifyBadgeCompletionBlock;
}

@property unsigned int badgeValue;
@property(copy) id modifyBadgeCompletionBlock;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (unsigned int)badgeValue;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithBadgeValue:(unsigned int)arg1;
- (id)modifyBadgeCompletionBlock;
- (void)performCKOperation;
- (void)setBadgeValue:(unsigned int)arg1;
- (void)setModifyBadgeCompletionBlock:(id)arg1;

@end