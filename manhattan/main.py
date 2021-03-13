import numpy as np

class NearestNeighbors:
    def __init__(self):
        pass

    def train(self,X,y):
        """X is N x D where exh row is an example. Y is 1-dimension of size N"""
        # the nearest neighbor classifier simply remembers all the training data
        self.Xtr = X
        self.ytr = y

    def predict(self,X):
        """X is N x D where each row is an example we wish to predict"""
        num_test = X.shape[0]
        # lets make sure that output matches the input datatype
        Ypred = np.zeros(num_test,dtype=self.ytr.dtype)

        # loop over all test rows
        for i in range(num_test):
            # find the nearest training image t yhr i'th test image
            # using the L1 distance(sum of absolute valur differences)
            distances = np.sum(np.abs(self.Xtr-X[i,:]),axis=1)
            min_index = np.argmin(distances)
            Ypred[i] = self.ytr[min_index]

        return Ypred
