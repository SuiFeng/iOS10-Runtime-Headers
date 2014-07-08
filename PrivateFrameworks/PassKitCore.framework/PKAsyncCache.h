/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class NSCache, NSMutableDictionary;

@interface PKAsyncCache : NSObject  {
    NSCache *_itemByKey;
    NSMutableDictionary *_deliveryBlocksByKey;
}


- (void)retrieveItemForKey:(id)arg1 retrievalBlock:(id)arg2 deliveryBlock:(id)arg3;
- (void)_executeRetrievalBlock:(id)arg1 forKey:(id)arg2;
- (void)_queue_executeDeliveryBlocksForKey:(id)arg1 withItem:(id)arg2;
- (id)init;
- (id)initWithCache:(id)arg1;
- (void)dealloc;

@end